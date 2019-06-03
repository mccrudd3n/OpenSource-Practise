#include <iostream>
using namespace std;

class Fish
{
public:
  virtual void Swim()
  {
    cout << "Fish swims!" << endl;
  }
};

class Tuna:public Fish
{
  //override Fish::Swin
  void Swim()
  {
    cout << "Tuna swims!" << endl;
  }
};

class Carp: public Fish
{
public:
  //override Fish::Swim
  void Swim()
  {
    cout << " Carp Swims!" << endl;
  }
};

void MakeFishSwim(Fish& InputFish)
{
  //Calling Virtual Method Swim()
  InputFish.Swim();
}

int main()
{
  Tuna myDinner;
  Carp myLunch;

  //Sending Tuna as Fish
  MakeFishSwim(myDinner);

  //Sending Carp as Fish
  MakeFishSwim(myLunch);

  return 0;
}
