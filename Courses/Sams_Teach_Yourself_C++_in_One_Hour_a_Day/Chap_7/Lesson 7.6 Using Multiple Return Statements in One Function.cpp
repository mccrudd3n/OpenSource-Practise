#include <iostream>

using namespace std;
const double Pi = 3.14159;

void QueryAndCalculate()
    {
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.5 Using Recursive Functions to Calculate a Number in the Fibonacci Series" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space

    cout << "Enter radius: ";
    double Radius = 0;
    cin >> Radius;
    cout << "Area: " << Pi * Radius * Radius << endl;
    cout << "Do you wish to calculate circumference (y/n)? ";
    char CalcCircum = 'n';
    cin >> CalcCircum;
    if (CalcCircum == 'n')
        return;
    cout << "Circumference: " << 2 * Pi * Radius << endl;
    return;
    }

int main()
{
  QueryAndCalculate ()
  return 0;
}
