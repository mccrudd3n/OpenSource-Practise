#include <iostream>
#include <string>

int Function()
{
    using namespace std;

    JumpToPoint:

    //User Input
    int Num1 =0, Num2 =0;

    cout << "Enter 2 Numbers" << endl;
    cout << "Number 1 >> ";
    cin >> Num1;
    cout << endl;
    cout << "Number 2 >> ";
    cin >> Num2;
    cout << endl; //Used for extra space

    //User Selects what Calculation he wants

    cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
    cout << "Do you wish to perform another operation (y/n)?" << endl;
    char Repeat = 'y';
    cin >> Repeat;
    if (Repeat == 'y')
      goto JumpToPoint;
    cout << "Goodbye!" << endl;
  }
int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.7 Asking the User If He Wants to Repeat Calculations Using goto" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    Function();

    return 0;
}
