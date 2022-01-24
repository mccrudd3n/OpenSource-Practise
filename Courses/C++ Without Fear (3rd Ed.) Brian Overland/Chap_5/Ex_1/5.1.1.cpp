#include <iostream>

using namespace std;

//Function declared
int factorial_output(int n);

int main()
{
    
    int n;

    cout << "Enter a number and press Enter: " << endl;
    cin >> n;

    //calling the result function
    factorial_output(n);
    return 0;

}

//Definition of a function
int factorial_output(int n)
{
    
    int x=n, fact = 1, i;
    for(i=1; i<=x; i++)
    fact = fact * i;
    cout<<"Factorial of "<<x<<" is "<<fact << endl;
    return x;
}