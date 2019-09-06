#include <iostream>

using namespace std;

int main()
{
  cout << endl; // Extra space so that its easy readable
  cout << "-------------------------------------------------------------" << endl;
  cout << "Lesson 6.13 Using Nested Loops to Multiply Each Element in an Array by Each in Another" << endl;
  cout << "-------------------------------------------------------------" << endl;
  cout << endl; // Extra space so that its easy readable


  const int ARRAY1_LEN = 3;
  const int ARRAY2_LEN = 2;

  int MyInt1[ARRAY1_LEN] = {35, -3, 0};
  int MyInt2[ARRAY2_LEN] = {20, -1};

  cout << "Multiplying each int in MyInt1 by each in MyInt2:" << endl;

  for (int Array1Index = 0; Array1Index < ARRAY1_LEN; ++Array1Index)
    for (int Array2Index =0; Array2Index < ARRAY2_LEN; ++Array2Index)

    cout << MyInt1[Array1Index] << " x " << MyInt2[Array2Index] << " = " << MyInt1[Array1Index] * MyInt2[Array2Index] << endl;

    return 0;


}
