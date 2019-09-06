#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.5 Manipulating Data Using a Pointer and the Dereference Operator (*)" << endl;
  cout << "----------------------------------------------------------" << endl;

  int DogsAge = 9; //Dogs age init
  cout << "The Dogs age is : " << DogsAge << endl;

  int* pAge = &DogsAge; //Pointer declared to DogsAge Address
  cout << "Pointer set to pAge" << endl;

  cout << "Enter Dogs Age: " << endl;
  cout << " >> " ;
  //  store input at the memory pointed to by pAge
  cin >> *pAge;

  // Display where the address is stored
  cout << "Input stored pAge at " << hex << pAge << endl;
  cout << "Integers Dogs Age: " << dec << DogsAge << endl;



  return 0;
}
