#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

/* ================= Iterator Interface ================= */
template <typename T>
class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual T next() = 0;
    virtual ~Iterator() {}
};

/* ================= Aggregate Interface ================= */
template <typename T>
class Aggregate {
public:
    virtual Iterator<T>* createIterator() = 0;
    virtual ~Aggregate() {}
};

/* ================= Employee Class ================= */
class Employee {
private:
    string name;
    double salary;

public:
    Employee(string name, double salary) {
        this->name = name;
        this->salary = salary;
    }

    double getSalary() {
        return salary;
    }
};

/* ================= Concrete Iterator ================= */
class EmployeeIterator : public Iterator<Employee*> {
private:
    vector<Employee*> employees;
    int index;

public:
    EmployeeIterator(vector<Employee*> employees) {
        this->employees = employees;
        index = 0;
    }

    bool hasNext() override {
        return index < employees.size();
    }

    Employee* next() override {
        if (!hasNext()) {
            throw out_of_range("No more employees");
        }
        return employees[index++];
    }
};

/* ================= Concrete Aggregate ================= */
class Company : public Aggregate<Employee*> {
private:
    vector<Employee*> employees;

public:
    Company(vector<Employee*> employees) {
        this->employees = employees;
    }

    Iterator<Employee*>* createIterator() override {
        return new EmployeeIterator(employees);
    }
};

/* ================= Client Code ================= */
int main() {
    vector<Employee*> employees;
    employees.push_back(new Employee("Alice", 50000));
    employees.push_back(new Employee("Bob", 60000));
    employees.push_back(new Employee("Charlie", 70000));

    Company company(employees);
    Iterator<Employee*>* iterator = company.createIterator();

    double totalSalary = 0;
    while (iterator->hasNext()) {
        totalSalary += iterator->next()->getSalary();
    }

    cout << "Total salary: " << totalSalary << endl;

    return 0;
}
