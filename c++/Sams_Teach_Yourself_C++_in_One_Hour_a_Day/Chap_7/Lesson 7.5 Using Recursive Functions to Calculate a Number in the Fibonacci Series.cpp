#include <iostream>

using namespace std;

int GetFibNumber (int FibIndex)
{
 if (FibIndex < 2)
  return FibIndex;
  else return GetFibNumber (FibIndex - 1) + GetFibNumber (FibIndex - 2);

}

int main()
{
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.5 Using Recursive Functions to Calculate a Number in the Fibonacci Series" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space


    cout << "Enter 0-based index of desired Fibonacci Number: " << endl;
    int index =0;
    cin >> index;

    cout << "Fibonacci Number is:" << GetFibNumber (index) << endl;

    return 0;
}
