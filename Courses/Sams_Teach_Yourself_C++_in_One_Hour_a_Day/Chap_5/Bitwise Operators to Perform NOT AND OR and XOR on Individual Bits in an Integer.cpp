#include <iostream>


int logic()
{
    using namespace std;
    cout << "Enter a number between 0-255: " <<endl;
    unsigned short InputNum = 0;
    cin >> InputNum;

    bitset<8> InputBits (InputNum);
    cout << InputNum << " in Binary is " << InputBits << endl;

    bitset<8> InputBitsNOT (~InputNum);
    cout << "Logical NOT | " << endl;
    cout << " ~ " << InputNum << " = " << InputBitsNOT << endl;

}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Demonstrating the Use of Bitwise Operators to Perform NOT, AND, OR, andXOR on Individual Bits in an Integer." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    logic();

    return 0;
}
