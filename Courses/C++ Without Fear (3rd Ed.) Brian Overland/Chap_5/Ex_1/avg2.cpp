#include <iostream>
using namespace std;

void print_results(double a, double b);
double avg(double x, double y);

int main()
{
    double a= 0.0;
    double b = 0.0;
    
    cout << "Enter first number and press ENTER" << endl;
    cin >> a;
    cout << "Enter second number and press ENTER" << endl;
    cin >> b;

    print_results(a,b);

    return 0;
}

void print_results(double a, double b)
{
    cout << "Average is: " << avg(a,b) <<endl;
}
double avg (double x, double y){
    return (x + y)/2;
}
