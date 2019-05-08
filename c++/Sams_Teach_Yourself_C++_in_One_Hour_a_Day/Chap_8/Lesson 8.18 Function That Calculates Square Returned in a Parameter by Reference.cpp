#include <iostream>

using namespace std;

void ReturnSquare (int& Number)
{
  Number *= Number;
}

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.18 Function That Calculates Square Returned in a Parameter by Reference" << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl; //Extra space

  cout << "Enter the Number you wish to Square" << endl;
  cout << " >> ";
  int Number = 0;
  cin >> Number;

  ReturnSquare(Number);
  cout << "Square is " << Number << endl;

  return 0;
}
