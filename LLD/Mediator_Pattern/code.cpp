#include<bits/stdc++.h>
using namespace std;

// Colleague Interface

class Airplane {
   public:
    virtual void requestTakeoff()=0;
    virtual void requestLanding()=0;
    virtual void notifyAirTrafficControl(string message)=0;
};

// Concrete Colleague
class CommercialAirplane : public Airplane {
    private:
     AirTrafficControlTower* mediator;

    public:
    
    CommercialAirplane(AirTrafficControlTower* mediator) {
        this->mediator = mediator;
    }
    
    void requestTakeoff() {
        mediator->requestTakeoff(this);
    }

    void requestLanding() {
        mediator->requestLanding(this);
    }

    void notifyAirTrafficControl(string message) {
        cout << "Commercial Airplane: " << message << endl;
    }
};

// Mediator Interface
class AirTrafficControlTower {
    public:
    virtual void requestTakeoff(Airplane* airplane) = 0;
    virtual void requestLanding(Airplane* airplane) = 0;
};

// Concrete Mediator
class AirportControlTower : public AirTrafficControlTower {
    public:
    void requestTakeoff(Airplane* airplane) {
        // Logic for coordinating takeoff
        airplane->notifyAirTrafficControl("Requesting takeoff clearance.");
    }

    void requestLanding(Airplane* airplane) {
        // Logic for coordinating landing
        airplane->notifyAirTrafficControl("Requesting landing clearance.");
    }
};

int main() {
        // Instantiate the Mediator (Airport Control Tower)
        AirTrafficControlTower* controlTower = new AirportControlTower();

        // Instantiate Concrete Colleagues (Commercial Airplanes)
        Airplane* airplane1 = new CommercialAirplane(controlTower);
        Airplane* airplane2 = new CommercialAirplane(controlTower);

        // Set up the association between Concrete Colleagues and the Mediator
        airplane1->requestTakeoff();
        airplane2->requestLanding();

        // Output:
        // Commercial Airplane: Requesting takeoff clearance.
        // Commercial Airplane: Requesting landing clearance.
    }
