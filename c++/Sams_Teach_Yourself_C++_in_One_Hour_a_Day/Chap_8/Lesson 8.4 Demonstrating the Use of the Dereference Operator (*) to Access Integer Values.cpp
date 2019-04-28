#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.4 Demonstrating the Use of the Dereference Operator (*) to Access Integer Values" << endl;
  cout << "----------------------------------------------------------" << endl;

  int Age = 30;
  int DogsAge = 9;

  cout << "Integer of Age is : " << Age << endl;
  cout << "Integer of DogsAge is :" << DogsAge << endl;
  int* pInteger = &Age;
  cout<< "pInterger points to Age" << endl;

  //Displaying the value of the Pointer
  cout << "pInterger = " << hex << pInteger << endl;
  //Displaying the value at the pointed location
  cout << "*pInteger = " << dec << *pInteger << endl;

  pInteger = &DogsAge;
  cout << "pInteger points to DogsAge" << endl;
  cout << "pInterger = " << hex << pInteger << endl;
  cout << "*pInteger = " << dec << *pInteger << endl;
  return 0;
}
