#include <iostream>
#include <string>

int NestedIF()
{
    using namespace std;

    int Num1 =0, Num2 =0; //Declare

    //User Input Section
    cout << "Enter Number 1: " << endl;
    cout << " >> "; //Input Pointer
    cin >> Num1;
    cout << "Enter Number 2: " << endl;
    cout << " >> "; //Input Pointer
    cin >> Num2;

    int Result =0; //Declare Result
    char UserSelect = '\0';

    cout << "Input \"D\" to Devide and Input \"M\" to Multiply. ";
    cout << " >> ";
    cin >> UserSelect;

    if (UserSelect == 'D')
    {
      cout << "You want to Divide!" << endl;
      if (Num2 != 0)
      {
      cout << "No divide-by-zero, proceeding to calculate" << endl;
      cout << Num1 << " / " << Num2 << " = " << Num1/Num2 << endl;
      }
      else
      cout << "Division by zero is not allowed" << endl;
    }
    else if (UserSelect == 'M')
    {
      cout << "You want multiplication!" << endl;
      cout << Num1 << " X " << Num2 << " = " << Num1 * Num2 << endl;
    }

}
int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.3 Using Nested ifStatements in Multiplying or Dividing a Number." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    NestedIF();

    return 0;
}
