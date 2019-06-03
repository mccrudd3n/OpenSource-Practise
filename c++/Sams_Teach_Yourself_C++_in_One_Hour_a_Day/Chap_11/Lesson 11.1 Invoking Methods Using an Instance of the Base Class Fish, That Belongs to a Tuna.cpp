#include <iostream>
using namespace std;

class Fish
{
public:
  void Swim()
  {
    cout << "Fish swims!" << endl;
  }
};

class Tuna:public Fish
{
public:
  //Override Fish::Swim
  void Swim()
  {
    cout << "Tuna Swims!" << endl;
  }
};

void MakeFishSwim(Fish& InputFish)
{
  // Calling Fish::Swim
  InputFish.Swim();
}

int main()
{
  Tuna myDinner;
  //Calling Tuna::Swim
  myDinner.Swim();

  //Sending Tuna as Fish
  MakeFishSwim(myDinner);

  return 0;
}
