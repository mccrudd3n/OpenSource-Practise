#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
  //Private Data
  string Name;
  int Age;

public:
  // Overloaded constructor (no default constructor)
  Human (string HumanName, int HumanAge)
  {
    Name = HumanName;
    Age = HumanAge;
    cout << "Overloaded constructor created " << Name << " of Age " << Age << endl;
  }
  void IntroduceSelf()
  {
    cout << "I am " << Name << " and I am " << Age << " years old" << endl;
  }
};
int main()
{
  // Uncomment next line to try creating using a default constructor
  // Human FirstMan;

  Human FirstMan ("Alan", 12);
  Human FirstWoman ("Alice", 22);

  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();

}
