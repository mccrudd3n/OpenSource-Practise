#include <iostream>

using namespace std;

class Animal
{
public:
  Animal()
  {
    cout << "Animal Constructore" << endl;
  }
  //Sample method
  int Age;
};

class Mammal:public Animal{};
class Bird:public Animal{};
class Reptile:public Animal{};
class Playtypus: public Mammal, public Bird, public Reptile
{
public:
  Playtypus()
  {
    cout << "Playtypus Constructor" << endl;
  }
};
int main()
{
  Playtypus duckBilledP;
  //Uncommet Next Line to see Compile Failure
  //Age is ambiguous as there are three instances of base Animal
  // duckBilledP.Age = 25;

  return 0;
}
