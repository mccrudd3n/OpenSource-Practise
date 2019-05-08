#include <iostream>

using namespace std;

void CalculateSquare(const int& Number, int& Result)
{
  Result = Number*Number;
}

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.19 Using const Reference to Ensure That the Calling Function CannotModify a Value Sent by Reference" << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl; //Extra space

  cout << "Enter the Number you wish to Square" << endl;
  cout << " >> ";
  int Number = 0;
  cin >> Number;

  int Square = 0;
  CalculateSquare(Number, Square);
  cout << Number << "^2 = " << Square << endl;


  return 0;
}
