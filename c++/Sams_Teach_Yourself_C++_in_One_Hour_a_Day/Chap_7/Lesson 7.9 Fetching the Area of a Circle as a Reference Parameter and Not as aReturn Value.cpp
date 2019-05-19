#include <iostream>

using namespace std;

//Inline defined
inline long DoubleNum (int InputNum)
{
  return InputNum * 2;
}

int main()
  {
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.10 Using an Inline Function That Doubles an Integer" << endl;
    cout << "-------------------------------------------------------------" << endl;

    cout << "Enter an Integer: " << endl;
    cout << " >> ";
    int InputNum =0;
    cin >> InputNum;

    //call inline Function
    cout << "Double is " << DoubleNum(InputNum) << endl;

    return 0;




  }
