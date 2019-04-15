#include <iostream>


int logic()
{
    using namespace std;
    //Data Input section
    bool num1=false , num2 =false;
    cout << "Enter true(1) or false(0) for two operands: " << endl;
    cout << "Enter Operand 1: ";
    cin >> num1;
    cout << "Enter Operand 2: ";
    cin >> num2;

    //Operation tests
    cout << "-------------------------------------------------------------" << endl;
    cout << "And Test" << endl;
    cout << "Results of AND Test: " << endl;
    cout << num1 << " AND " << num2 << " = " << (num1 && num2) << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Results of OR Test: " << endl;
    cout << num1 << " OR " << num2 << " = " << (num1 || num2) << endl;

}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "This function demonstrates the workings of logical AND and logical OR operators." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    logic();

    return 0;
}
