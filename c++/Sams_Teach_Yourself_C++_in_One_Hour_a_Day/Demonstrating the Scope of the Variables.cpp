#include <iostream>

using namespace std;

void MultiplyNumbers ()
{
    //Ask user for number 1 =x
    cout << "Enter your First Number: " << endl;
    int x = 0;
    cin >> x;

    // Ask usr for num 2 = y
    cout << "Enter your Second Number: " << endl;
    int y = 0;
    cin >> y;

    //define total, do calculation then print results
    int total;
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
