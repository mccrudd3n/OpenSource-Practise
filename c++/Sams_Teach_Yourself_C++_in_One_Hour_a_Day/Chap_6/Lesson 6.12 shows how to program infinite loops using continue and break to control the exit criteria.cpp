#include <iostream>

int Function()
{
    using namespace std;
    // without loop expression
    for(;;)   // an infinite loop
    {
    int Num1 = 0, Num2 = 0;
    cout << "Enter Number 1:" << endl;
    cout << " >> ";
    cin >> Num1;
    cout << "Enter Number 2:" << endl;
    cout << " >> ";
    cin >> Num2;
    cout << "Do you wish to correct the numbers? (y/n): ";
    char ChangeNumbers = '\0';
    cin >> ChangeNumbers;

    if (ChangeNumbers == 'y')
      continue;  // restart the loop!

    cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

    cout << "Press x to exit or any other key to recalculate" << endl;
    char UserSelection = '\0';
    cin >> UserSelection;
    if (UserSelection == 'x')
      break;   // exit the infinite loop
    }
    cout << "End of Program." << endl;
}

int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.12 shows how to program infinite loops using continue and break to control the exit criteria" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    Function();

    return 0;
}
