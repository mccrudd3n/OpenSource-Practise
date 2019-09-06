#include <iostream>

using namespace std;

class Motor
{
public:
  void SwitchIgnition()
  {
    cout << "Ignition On" << endl;
  }
  void PumpFuel()
  {
    cout << "Fuel in Cylinders" << endl;
  }
  void FireCylinders()
  {
    cout << "Boom" << endl;
  }
};
class Car: private Motor
{
public:
  void Move()
  {
    SwitchIgnition();
    PumpFuel();
    FireCylinders();
  }
};
int main()
{
  Car myDreamCar;
  myDreamCar.Move();

  return 0;
}
