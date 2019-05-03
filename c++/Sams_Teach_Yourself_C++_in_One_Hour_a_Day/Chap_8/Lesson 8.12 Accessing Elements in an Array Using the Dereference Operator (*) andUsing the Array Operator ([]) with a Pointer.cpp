#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.12 Accessing Elements in an Array Using the Dereference Operator (*) and Using the Array Operator ([]) with a Pointer" << endl;
  cout << "----------------------------------------------------------" << endl;

  const int ArrayLen = 5;
  //Static Array of 5 Integers initialised
  int MyNumbers[ArrayLen] = {24, -1, 365, -999, 2011};
  //Pointer Initialised to first element of the Array
  int* pNumbers = MyNumbers;
  cout << "Displaying array using pointer syntax, operator*" << endl;
  for (int Index = 0; Index < ArrayLen; ++Index)
    cout << "Element " << Index << " = " << *(MyNumbers + Index) << endl;

  cout << "Displaying array using pointer with array syntax, operator[]" <<endl;
  for (int Index = 0; Index < ArrayLen; ++Index)
    cout << "Element " << Index << " = " << MyNumbers[Index] << endl;


  return 0;
}
