#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.3 Pointer Reassignment to Another Variable" << endl;
  cout << "----------------------------------------------------------" << endl;

  int Age = 30;
  int* pInteger = &Age;
  cout << "pInteger points to Age now " << endl;

  //Display the value of the Pointer
  cout << "pInteger is " << hex << pInteger << endl;

  int DogsAge = 9;
  pInteger = &DogsAge;
  cout << "pInteger points to DogsAge now " << endl;
  cout << "pInteger is " << hex << pInteger << endl;

  return 0;
}
