#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.2 Demonstrating the Declaration and Initialization of a Pointer" << endl;
  cout << "----------------------------------------------------------" << endl;

  int Age = 30;
  int* pInteger = &Age;

  //Displaying the value of pointer
  cout << "Integer Age is at: 0x" << hex << pInteger << endl;
  return 0;
}
