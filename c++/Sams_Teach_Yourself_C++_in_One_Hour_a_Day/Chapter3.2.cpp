#include <iostream>

using namespace std;

int main()
{
    cout << "This short program will help you multiply two numbers" << endl;

    //Ask user for number 1 =x
    cout << "Enter your First Number: " << endl;
    int x = 0;
    cin >> x;

    // Ask usr for num 2 = y
    cout << "Enter your Second Number: " << endl;
    int y = 0;
    cin >> y;
    //define total and maths is done then printed
    int total;
    total = x * y;
    cout << "Solution = " << total << endl;

    return 0;

}
