#include <iostream>
using namespace std;

// Abstract class defining the template method
class BeverageMaker {
public:
    // Template method (final in Java → non-virtual here)
    void makeBeverage() {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    // Abstract methods
    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    // Common methods
    void boilWater() {
        cout << "Boiling water" << endl;
    }

    void pourInCup() {
        cout << "Pouring into cup" << endl;
    }

    // Virtual destructor (good practice)
    virtual ~BeverageMaker() {}
};

// Concrete subclass for making tea
class TeaMaker : public BeverageMaker {
public:
    void brew() override {
        cout << "Steeping the tea" << endl;
    }

    void addCondiments() override {
        cout << "Adding lemon" << endl;
    }
};

// Concrete subclass for making coffee
class CoffeeMaker : public BeverageMaker {
public:
    void brew() override {
        cout << "Dripping coffee through filter" << endl;
    }

    void addCondiments() override {
        cout << "Adding sugar and milk" << endl;
    }
};

int main() {
    cout << "Making tea:" << endl;
    BeverageMaker* teaMaker = new TeaMaker();
    teaMaker->makeBeverage();

    cout << "\nMaking coffee:" << endl;
    BeverageMaker* coffeeMaker = new CoffeeMaker();
    coffeeMaker->makeBeverage();

    delete teaMaker;
    delete coffeeMaker;

    return 0;
}
