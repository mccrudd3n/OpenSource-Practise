#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void DisplayNumbers(vector<int>& DynArray)
{

  for_each (DynArray.begin(), DynArray.end(), [] (int Element) {cout << Element << " ";} ); // lambda
}

int main()
  {
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.11 Using Lambda Functions to Display Elements in an Array and to Sort Them" << endl;
    cout << "-------------------------------------------------------------" << endl;

    vector<int> MyNumbers;
    MyNumbers.push_back(501);
    MyNumbers.push_back(-1);
    MyNumbers.push_back(25);
    MyNumbers.push_back(-35);
    DisplayNumbers(MyNumbers);

    cout << "Sorting them in descending order" << endl;

    sort (MyNumbers.begin(), MyNumbers.end(), [](int Num1, int Num2) {return (Num2 < Num1); } );

    DisplayNumbers(MyNumbers);

    return 0;

  }
