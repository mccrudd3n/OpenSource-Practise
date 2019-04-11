#include <iostream>

using namespace std;

//Global integers
int x = 0, y = 0, total = 0;

void MultiplyNumbers ()
{
    //Ask user for number 1 =x
    cout << "Enter your First Number: " << endl;
    cin >> x;

    // Ask usr for num 2 = y
    cout << "Enter your Second Number: " << endl;
    cin >> y;

    //define total, do calculation then print results
    total = x * y;
    cout << "Solution = " << total << endl;
}
int main()
{
    cout << "This short program will help you multiply two numbers" << endl;

    //calling the function
    MultiplyNumbers();

    return 0;
}
