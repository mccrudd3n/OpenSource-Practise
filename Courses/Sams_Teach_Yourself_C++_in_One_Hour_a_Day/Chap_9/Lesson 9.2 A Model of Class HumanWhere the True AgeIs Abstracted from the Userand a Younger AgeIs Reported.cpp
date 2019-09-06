#include <iostream>

using namespace std;

class Human
{
private:
  //Age is set to private
  int Age;

public:
  //Used to access th Private data, Like "a bridge"
  void SetAge (int InputAge)
  {
    Age = InputAge;
  }

  //Human Lies about her age if over 30
  /*This section gives the Private a use case, we can use the real age or fake the age - also known as allowing the class to control what attributes it wants to expose and how it wants to expose */
  int GetAge()
  {
  if (Age > 30)
    return (Age - 2);
  else
    return Age;
  }
};

int main()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 9.2 A Model of Class HumanWhere the True AgeIs Abstracted from the Userand a Younger AgeIs Reported" << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl; //Extra space


  Human Firstman;
  Firstman.SetAge(35);

  Human FirstWoman;
  FirstWoman.SetAge(22);

  cout << "Age of Firstman " << Firstman.GetAge() << endl;
  cout << "Age of FirstWoman " << FirstWoman.GetAge() << endl;

}
