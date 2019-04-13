#include <iostream>

int Operators()
{
    using namespace std;
    //User Enters 2 different numbers
    cout << "Enter Number 1: "<< endl;

    //Declairing type and asking user to enter numbers
    int num1 =0;
    cin >> num1;

    cout << "Enter Number 1: "<< endl;
    int num2 =0;
    cin >> num2;

    //Operation tests, learning how to use basic operations and mixing with strings
    cout << "Results" << endl;
    cout << "Total of " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Total of " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Total of " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "Total of " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "Total of " << num1 << " % " << num2 << " = " << num1 % num2 << endl;

}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "This function Demonstrate Arithmetic Operators on Integers Input by the User" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    Operators();

    return 0;
}
