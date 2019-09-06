#include <iostream>


int Var()
{
    using namespace std;

    int num1 = 101; //Declare Var
    cout << "Start value of integer being operated: " << num1 << endl;
    cout << "---------------------------" << endl;

    int PostfixInc = num1++;
    cout << "Result of Postfix (num1++) Increment = " << PostfixInc << endl;
    cout << "After Postfix Increment, MyInt = " << num1 << endl;

    num1 = 101; //Rest num1 back to 100

    cout << "---------------------------" << endl;
    int PostfixDec = num1--;
    cout << "Result of Postfix (num1--) Decrements = " << PostfixInc << endl;
    cout << "After Postfix Decrements, MyInt = " << num1 << endl;

    num1 = 101; //Rest num1 back to 100

    cout << "---------------------------" << endl;
    int PrefixInc = ++num1;
    cout << "Result of Prefix (++num1) Increment = " << PostfixInc << endl;
    cout << "After Prefix Increment, MyInt = " << num1 << endl;

    num1 = 101; //Rest num1 back to 100

    cout << "---------------------------" << endl;
    int PrefixDec = --num1;
    cout << "Result of Prefix (--num1) Decrements = " << PostfixInc << endl;
    cout << "After Prefix Decrements, MyInt = " << num1 << endl;

}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "This function Demonstrate the Difference Between Postfix and Prefix Operators" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    Var();

    return 0;
}
