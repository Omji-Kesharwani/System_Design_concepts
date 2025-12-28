#include<bits/stdc++.h>
using namespace std;
//Implementor class
class Workshop{
  public:
   virtual void work()=0;
};

//Abstraction class
class Vehicle{
  public:
  Workshop* workshop1;
  Workshop* workshop2;
  
  Vehicle(Workshop* workshop1,Workshop* workshop2){
    this->workshop1=workshop1;
    this->workshop2=workshop2;
  }

  virtual void manufacture()=0;
};

class Car: public Vehicle{
  public:
  Car(Workshop* workshop1,Workshop* workshop2):Vehicle(workshop1,workshop2){}

  void manufacture() override{
    cout << "Car "<< endl;
    workshop1->work();
    workshop2->work();
  }

};

class Bike: public Vehicle{
  public:
  Bike(Workshop* workshop1,Workshop* workshop2):Vehicle(workshop1,workshop2){}

  void manufacture() override{
    cout << "Bike "<< endl;
    workshop1->work();
    workshop2->work();
  }

};

class Produce: public Workshop{
  public:
   void work() override{
     cout<<"Produced"<<endl;
   }
};

class Assemble: public Workshop{
  public:
   void work() override{
     cout<<"Assembled"<<endl;
   }
};

int main()
{
  Vehicle* vehicle1 = new Car(new Produce(),new Assemble());
  Vehicle* vehicle2 = new Bike(new Produce(),new Assemble());

  vehicle1->manufacture();
  vehicle2->manufacture();
}
