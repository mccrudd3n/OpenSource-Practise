#include <iostream>

using namespace std;

int main()

{
  cout << endl; // Extra space so that its easy readable
  cout << "-------------------------------------------------------------" << endl;
  cout << "Lesson 6.14 Using Nested Loops to Iterate Elements in a Two-dimensional Array of Integers" << endl;
  cout << "-------------------------------------------------------------" << endl;
  cout << endl; // Extra space so that its easy readable

  //Declare the Array info
  const int MAX_ROW = 3;
  const int MAX_COL = 4;

  //2D Array of Integers
  int MyInts [MAX_ROW][MAX_COL] = { {34, -1, 879, 22}, {24, 365, -101, -1}, {0, 40, 90, 97} };

  //Iterate over Rows
  for (int Row = 0; Row < MAX_ROW; ++Row)
  {
    //iterate integers in each row (columns)
    for (int Col =0; Col < MAX_COL; ++Col)
    {cout << "Integer[" << Row << "][" << Col << "] = " << MyInts[Row][Col] << endl;}
  }
  return 0;
}
