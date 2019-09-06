#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
  string Name;
  int Age;

public:
  Human(string InputName = "Adam", int InputAge = 22)
  :Name(InputName), Age(InputAge)
  {
    cout << "Constructed a Human called " << Name;
    cout << ", " << Age << " years old" << endl;
  }
};

int main()
{
  Human FirstMan;
  Human FirstWoman("Alice", 21);

  return 0;
}
