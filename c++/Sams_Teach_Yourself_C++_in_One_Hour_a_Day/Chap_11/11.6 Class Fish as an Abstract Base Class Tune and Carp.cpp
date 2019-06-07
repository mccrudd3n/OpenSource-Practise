#include <iostream>

using namespace std;
class Fish
{
public:
  //Define a pure virtual Function Swim
  virtual void Swim() =0;

};

class Tuna:public Fish
{
public:
  void Swim()
  {
    cout << "Tuna Swms faster in the sea!" << endl;
  }
};

class Carp:public Fish
{
public:
  void Swim()
  {
    cout << "Carp swims slow in the lake! " << endl;
  }
};

void MakeFishSwim(Fish& inputFish)
{
  inputFish.Swim();
}
int main()
{
  //Fish myFish; //Fails, Cannot instantia an ABC
  Carp myLunch;
  Tuna myDinner;

  MakeFishSwim(MyLunch);
  MakeFishSwim(MyDinner);

  return 0;
}
