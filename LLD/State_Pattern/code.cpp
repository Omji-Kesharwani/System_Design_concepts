#include<bits/stdc++.h>
using namespace std;

class VendingMachineState {
    public:
    virtual void handleRequest() = 0;
};

class ReadyState : public VendingMachineState {
    public:
    void handleRequest() override {
        cout << "Ready state: Please select a product." << endl;
    }
};

class ProductSelectedState : public VendingMachineState {
    public:
    void handleRequest() override {
        cout << "Product selected state: Processing payment." << endl;
    }
};

class PaymentPendingState : public VendingMachineState {
   public:
    void handleRequest() override {
        cout << "Payment pending state: Dispensing product." << endl;
    }
};

class OutOfStockState : public VendingMachineState {
    public:
    void handleRequest() override {
        cout << "Out of stock state: Product unavailable. Please select another product." << endl;
    }
};

class VendingMachineContext {
    private:
     VendingMachineState* state;

    public:
    
    void setState(VendingMachineState* state) {
        this->state = state;
    }
      void request() {
        state->handleRequest();
    }
};

 int main() {
        VendingMachineContext* vendingMachine = new VendingMachineContext();

        // Set initial state
        vendingMachine->setState(new ReadyState());

        // Request state change
        vendingMachine->request();

        // Change state
        vendingMachine->setState(new ProductSelectedState());

        // Request state change
        vendingMachine->request();  
        // Change state
        vendingMachine->setState(new PaymentPendingState());

        // Request state change
        vendingMachine->request();

        // Change state
        vendingMachine->setState(new OutOfStockState());

        // Request state change
        vendingMachine->request();
        return 0;
    }
