#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.15 Handle Exceptions, Exit Gracefully When new Fails " << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl; //Extra space

  try
  {
  // Request lots of memory space
  int* pAge = new int [536870911];
  // Use the allocated memory
  delete[] pAge;
  }
  catch (bad_alloc)
  {
    cout << "Memory allocation failed. Ending program" << endl;

  }
  return 0;
}
