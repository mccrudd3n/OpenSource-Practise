#include <iostream>
#include <string>

int Function()
{
    using namespace std;

    char UserSelect = 'm'; //Initial value

    while (UserSelect != 'x')
    {
    //User Input
    int Num1 =0, Num2 =0;

    cout << "Enter 2 Numbers" << endl;
    cout << "Number 1 >> ";
    cin >> Num1;
    cout << endl;
    cout << "Number 2 >> ";
    cin >> Num2;
    cout << endl; //Used for extra space

    cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

    cout << "Press 'x' to exit or any other key to recalculate" << endl;
    cin >> UserSelect;

    }

    cout << "Goodbye!" << endl;
  }
int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.8 Usingg a while Loop to help the user rerun Calculations" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    Function();

    return 0;
}
