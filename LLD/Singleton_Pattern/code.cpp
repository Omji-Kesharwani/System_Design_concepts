#include <iostream>
#include <mutex>
using namespace std;

class Singleton {
private:
    // Static instance pointer
    static Singleton* instance;

    // Mutex for thread safety
    static mutex mtx;

    // Private constructor
    Singleton() {
        cout << "Singleton instance created\n";
    }

public:
    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Public method to get instance
    static Singleton* getInstance() {
        if (instance == nullptr) {              // First check (no lock)
            lock_guard<mutex> lock(mtx);        // Lock mutex
            if (instance == nullptr) {          // Second check (with lock)
                instance = new Singleton();
            }
        }
        return instance;
    }

    // Sample function
    void showMessage() {
        cout << "Hello from Singleton\n";
    }
};

// Static member initialization
Singleton* Singleton::instance = nullptr;
mutex Singleton::mtx;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->showMessage();

    if (s1 == s2)
        cout << "Both objects are the same instance\n";
    else
        cout << "Different instances\n";

    return 0;
}
