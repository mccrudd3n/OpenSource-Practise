#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.7 Accessing Memory Allocated Using newvia Operator (*) and Releasing It Using delete" << endl;
  cout << "----------------------------------------------------------" << endl;

  //Request for memory spae for int
  int* pAge = new int;
  //Use the allocated memory to store a number
  cout << "Enter your Dogs Age >> ";
  cin >> *pAge;
  //Use indirection operator* to access value
  cout << "Age is " << *pAge << " is stored at " << hex << &pAge << endl;

  delete pAge; //Realse the memory space
  return 0;
}
