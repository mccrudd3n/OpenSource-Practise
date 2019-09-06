#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
  string Name;
  int Age;
public:
  //Constructors
  Human()
  {
    Age = 0; // Age Initialize so no Junk data
    cout << "Constructed Class humans" << endl;
  }
  void SetName(string HumanName)
  {
    Name = HumanName;
  }
  void SetAge(int HumanAge)
  {
    Age = HumanAge;
  }
  void IntroduceSelf()
  {
    cout << "My Name is " + Name << " and I am " << Age << " Years old" << endl;
  }
};

int main()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 9.3 Using Constructors to Initialize Class Member Variables" << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl; //Extra space

  Human FirstMan;
  FirstMan.SetAge(30);
  FirstMan.SetName("Adam");

  Human FirstWoman;
  FirstWoman.SetAge(31);
  FirstWoman.SetName("Alice");

  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();
}
