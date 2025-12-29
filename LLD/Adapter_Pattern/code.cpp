// Adapter Design Pattern Example Code

#include <iostream>

// Target Interface
class Printer {
public:
    virtual void print() = 0;
};

// Adaptee
class LegacyPrinter {
public:
    void printDocument() {
        std::cout << "Legacy Printer is printing a document." <<
        std::endl;
    }
};

// Adapter
class PrinterAdapter : public Printer {
private:
    LegacyPrinter legacyPrinter;

public:
    void print() override {
        legacyPrinter.printDocument();
    }
};

// Client Code
void clientCode(Printer& printer) {
    printer.print();
}

int main() {
    // Using the Adapter
    PrinterAdapter adapter;
    clientCode(adapter);

    return 0;
}