#include <iostream>

using namespace std;

class Motor
{
public:
  void SwitchIgnition()
  {
    cout << "Ignition On" << endl;
  }
  void FulePump()
  {
    cout << "Fuel In Cylinders" << endl;
  }
  void FireCylinder()
  {
    cout << "Bang" << endl;
  }
};

class Car:protected Motor
{
public:
  void Move()
  {
    SwitchIgnition();
    FulePump();
    FireCylinder();
  }
};

class SuperCar:protected Car
{
public:
  void Move()
  {
    SwitchIgnition(); //Has Access to base members due to protected inheritence between Car and Motor
    FulePump();
    FireCylinder();
    FireCylinder();
    FireCylinder();
  }
};

int main()
{
  SuperCar myDreamCar;
  myDreamCar.Move();
  return 0;
}
