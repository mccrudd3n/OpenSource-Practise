#include <iostream>


int CompoundAssignmentOps()
{
    using namespace std;

    //user Input
    cout << "Enter a Number: " << endl;
    int value =0;
    cin >> value;
    int  OriginalInput = value; //Used as a reset

    // Use of Compond Assignment Ops
    cout << "-------------------------------------------------------------" << endl;
    value += 8;
    cout << "After += 8, Value = " << value << endl;
    value = OriginalInput;
    //This section was used to test that "Value" returned to its original input
    /*
    value = OriginalInput;
    cout << "Value Reset test " << value;
    */
    cout << "-------------------------------------------------------------" << endl;
    value -= 8;
    cout << "After -= 8, Value = " << value << endl;
    value = OriginalInput;

    cout << "-------------------------------------------------------------" << endl;
    value *= 8;
    cout << "After *= 8, Value = " << value << endl;
    value = OriginalInput;
    cout << "-------------------------------------------------------------" << endl;
    value /= 8;
    cout << "After /= 8, Value = " << value << endl;
    value = OriginalInput;
    cout << "-------------------------------------------------------------" << endl;
    value %= 8;
    cout << "After %= 8, Value = " << value << endl;
    value = OriginalInput;
    cout << "-------------------------------------------------------------" << endl;

    cout << "After <<= 1, Value = " << (value <<= 1) << endl;
    value = OriginalInput;
    cout << "-------------------------------------------------------------" << endl;
    cout << "After >>= 2, Value = " << (value >>= 2) << endl;
    value = OriginalInput;
    cout << "-------------------------------------------------------------" << endl;

    cout << "After |= 0x55, value = " << (value |= 0x55) << endl;
    value = OriginalInput;
    cout << "-------------------------------------------------------------" << endl;

    cout << "After ^= 0x55, value = " << (value ^= 0x55) << endl;
    value = OriginalInput;
    cout << "-------------------------------------------------------------" << endl;
    cout << "After &= 0x0F, value = " << (value &= 0x0F) << endl;



}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Demonstrates the effect of using Compound Assignment operators." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    CompoundAssignmentOps();

    return 0;
}
