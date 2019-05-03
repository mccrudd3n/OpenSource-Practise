#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.11 Demonstrate That the Array Variable Is a Pointer to the First Element" << endl;
  cout << "----------------------------------------------------------" << endl;

  //Static Array of 5 Ints
  int MyNumber[5];

  //Array assigend to pointer to Int
  int* pNumber = MyNumber;

  //Display address in Pointer
  cout << "Address of pNumber is: " << pNumber << endl;

  //Address of the First element of the Array
  cout << "Address of element 0 in Array is: " << &MyNumber[0] << endl;

  return 0;
}
