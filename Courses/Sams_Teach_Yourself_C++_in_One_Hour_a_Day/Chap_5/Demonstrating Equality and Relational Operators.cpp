#include <iostream>


int Operators()
{
    using namespace std;
    //Data Input section
    int num1=0 , num2 =0;
    cout << "Enter Number1: ";
    cin >> num1;
    cout << "Enter Number2: ";
    cin >> num2;

    //Operation tests
    cout << "-------------------------------------------------------------" << endl;
    cout << "Equality Test" << endl;
    bool Equal = ( num1 == num2);
    cout << "Results of Equality Test: " << Equal << endl;

    cout << "-------------------------------------------------------------" << endl;
    cout << "Inequality Test" << endl;
    bool Inequal = ( num1 == num2);
    cout << "Results of Inequality Test: " << Inequal << endl;

    cout << "-------------------------------------------------------------" << endl;
    cout << "Number 1 is Greater Than Number 2 Test" << endl;
    bool Greater = ( num1 > num2);
    cout << "Results of Test: " << Greater << endl;

    cout << "-------------------------------------------------------------" << endl;
    cout << "Number 1 is Less Than Number 2 Test" << endl;
    bool Less = ( num1 > num2);
    cout << "Results of Test: " << Less << endl;

    cout << "-------------------------------------------------------------" << endl;
    cout << "Number 1 is Greater Than or Equal to Number 2 Test" << endl;
    bool GreaterEq = ( num1 >= num2);
    cout << "Results of Test: " << GreaterEq << endl;

    cout << "-------------------------------------------------------------" << endl;
    cout << "Number 1 is Less Than or Equal to Number 2 Test" << endl;
    bool LessEq = ( num1 <= num2);
    cout << "Results of Test: " << LessEq << endl;



}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "This function Demonstrating Equality and Relational Operators" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    Operators();

    return 0;
}
