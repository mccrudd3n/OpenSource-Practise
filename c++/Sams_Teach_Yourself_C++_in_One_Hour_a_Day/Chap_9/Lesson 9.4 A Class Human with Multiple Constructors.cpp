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
  //constructor
  Human()
  {
  Age  = 0; // Initialised to ensure no Junk Values
  cout << "Default constructor creates an instance of Human" << endl;
  }

  //Overloading a constructor that takes Name
  Human (string HumanName)
  {
  Name = HumanName;
  Age = 0; // Initialised to ensure no Junk Values
  cout << "Overloaded constructor creates " << Name << endl;
  }

  //Overloading a constructor that takes Name and Age
  Human (string HumanName, int HumanAge)
  {
  Age = HumanAge;
  Name = HumanName;
  cout << "Overloaded constructor creates ";
  cout << Name << " of " << Age << " years" << endl;
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
  cout << "I am " + Name << " and am ";
  cout << Age << " years old" << endl;
  }
};

int main()
{
  Human FirstMan; //Use Default constructor
  FirstMan.SetName("Adam");
  FirstMan.SetAge(30);

  Human FirstWoman ("Alice"); //Use Overloaded constructor
  FirstWoman.SetAge(22);

  Human FirstChild ("Bob", 1);

  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();
  FirstChild.IntroduceSelf();
}
