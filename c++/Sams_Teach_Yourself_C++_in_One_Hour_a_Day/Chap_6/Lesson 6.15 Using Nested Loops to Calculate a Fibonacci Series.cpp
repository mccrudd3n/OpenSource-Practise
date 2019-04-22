#include <iostream>

using namespace std;

int main()

{
  cout << endl; // Extra space so that its easy readable
  cout << "-------------------------------------------------------------" << endl;
  cout << "Lesson 6.15 Using Nested Loops to Calculate a Fibonacci Series" << endl;
  cout << "-------------------------------------------------------------" << endl;
  cout << endl; // Extra space so that its easy readable

  const int NumsToCal = 5;

  cout << "This program will calculate " << NumsToCal << " Fibonacci Numbers at a time" << endl;

  int Num1 = 0, Num2 = 1;
  char WantMore ='\0';

  cout << Num1 << " " << Num2 << " ";

  do {
    for (int Index =0; Index < NumsToCal; ++Index;)
    {
      cout << Num1 + Num2 << " ";
      int Num2Temp = Num2;
      Num2 = Num1 + Num2;
      Num1 = Num2Temp;
    }
    cout << endl; // Added for space
    cout << "Do you want more?"<< endl;
    cout << " >> ";
    cin >> WantMore;

  } while(WantMore == 'y');
  cout << "Program Terminated."
  return 0;
}
