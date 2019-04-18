#include <iostream>
#include <string>

int ConditionalOp()
{
    using namespace std;

    //User Input
    int Num1 =0, Num2 =0;
    cout << "Enter Number 1: " << endl;
    cout << " >> ";
    cin >> Num1;
    cout << "Enter Number 2: " << endl;
    cout << " >> ";
    cin >> Num2;

    int Max = (Num1 < Num2) ? Num1 : Num2;
    cout << "The greater of " << Num1 << " and " << Num2 << " is: " << Max << endl;

}
int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.6 Using the Conditional Operator (?:) to Find the Max of Two Numbers" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    ConditionalOp();

    return 0;
}
