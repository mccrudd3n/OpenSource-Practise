#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.16 Using new(nothrow) That Returns NULL When Allocation Fails " << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl; //Extra space

  //Request lots of memory space, use nothrow version
  int* pAge = new(nothrow) int [0x1fffffff];

  if (pAge) // check pAge != NULL
  {
  // Use the allocated memory
  delete[] pAge;
  }
  else
  cout << "Memory allocation failed. Ending program" << endl;


  return 0;
}
