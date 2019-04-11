#include <iostream>

using namespace std; //Dont forget that global Var should be used only when needed.

int AutoNum()
{
    auto Number = 0;
    //Note: Dont forget to declaire

    cout << "Please Entre a Number: " << endl;
    cin >> Number;
    cout << "Number = " << Number << endl;
    cout << "sizeof(Number) =" << sizeof(Number) << endl;

}

int AutoFlag()
{
    auto Flag = true;
    //Note: Dont forget to declaire
    cout << "Flag = " << Flag << endl;
    cout << "sizeof(Flag) =" << sizeof(Flag) << endl;

}

int main()
{
    cout << "This Function presents the using auto keyword and relying on the Compiler’s type-inference capabilities" << endl;

    //Functions are Invoked here
    AutoNum();
    AutoFlag();

    return 0;
}
