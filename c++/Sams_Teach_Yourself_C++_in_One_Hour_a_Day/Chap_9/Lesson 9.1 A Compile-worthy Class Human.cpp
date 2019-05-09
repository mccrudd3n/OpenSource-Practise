#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
  string Name;
  int Age;
public:
  void SetName (string HumansName)
  {
    Name = HumansName;
  }
  void SetAge (int HumansAge)
  {
    Age = HumansAge;
  }
  void IntroduceSelf ()
  {
    cout << "Hello My name is " << Name << endl;
    cout << "I am " << Age << " Years old" << endl;
  }
};

int main ()
{
  //Constructing an object of class Human with attribute Name as “Adam”
  Human FirstMan;
  FirstMan.SetName("Adam");
  FirstMan.SetAge(21);

  //Constructing an object of class Human with attribute Name as "Bob"
  Human FirstWoman;
  FirstWoman.SetName("Bob");
  FirstWoman.SetAge(21);

  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 9.1 A Compile-worthy Class Human" << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl; //Extra space


  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();


}
