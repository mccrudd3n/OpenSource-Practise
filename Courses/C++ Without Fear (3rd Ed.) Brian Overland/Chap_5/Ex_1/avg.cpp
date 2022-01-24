#include <iostream>
using namespace std;

double avg(double x, double y);

int main()
{
    double a= 0.0;
    double b = 0.0;

    cout << "Enter first number and press ENTER" << endl;
    cin >> a;
    cout << "Enter second number and press ENTER" << endl;
    cin >> b;

    cout << "Average is: " << avg(a,b) <<endl;

    return 0;
}

double avg (double x, double y){
    return (x + y)/2;
}
