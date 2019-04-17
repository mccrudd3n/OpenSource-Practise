#include <iostream>


int ConditionalExe()
{
    using namespace std;
    // Ask for User Input

    cout << "Enter 2 Values: " << endl;
    int Num1 =0, Num2 =0;
    cin >> Num1;
    cin >> Num2;

    cout << "Enter \"m\" to multiply, anything else to add: ";
    char UserSelection = '\0';
    cin >> UserSelection;

    int Result =0;
    if (UserSelection == 'm')
      Result = Num1 * Num2;
    else
      Result = Num1 + Num2;

    cout << "Result is : " << Result << endl;

}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.1 - Multiplying or Adding Two Integers on Basis of User Input." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    ConditionalExe();

    return 0;
}
