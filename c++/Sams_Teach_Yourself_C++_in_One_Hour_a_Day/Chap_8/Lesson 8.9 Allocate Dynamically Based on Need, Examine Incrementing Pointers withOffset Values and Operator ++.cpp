#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.9 Allocate Dynamically Based on Need, Examine Incrementing Pointers withOffset Values and Operator ++ " << endl;
  cout << "----------------------------------------------------------" << endl;

  cout << "How many Integers do you wish to enter? " << endl;
  int InputNumbers = 0;
  cin >> InputNumbers;

  // allocate request Integers
  int* pNumbers = new int[InputNumbers];
  int* pCopy = pNumbers;

  cout << "Succesfully allocated memmory for " << InputNumbers << " Integers." << endl;

  for (int Index =0; Index < InputNumbers; ++Index)
  {
    cout << "Enter number " << Index << ":";
    cin >> *(pNumbers + Index);
  }

  cout << "Display all number inputs: " << endl;

  for(int Index = 0; Index < InputNumbers; ++Index)
  cout << *(pCopy++) << " ";

  cout <<endl;
  //delete pointer when done
  delete[] pNumbers;

  return 0;
}
