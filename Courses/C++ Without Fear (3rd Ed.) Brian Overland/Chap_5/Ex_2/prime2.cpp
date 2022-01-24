#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n);

int main()
{
    int n = 0;

    while(true)
    {
        cout << "Enter number and press ENTER (0 = Exit) " << endl;
        cin >> n;
        if (n==0)
        {
            break;
        }
        if (prime(n))
        {
            cout << n << " is prime" << endl;
        }
        else
        {
            cout << n << " is not prime" << endl;
        }
    }
    return 0;
}

/* Prime-number function. Test divisors from 2 to sqrt of n. 
Return false of a divisor found; otherwise, return true. */

bool prime(int n) 
{
    for (int i = 2; i<= sqrt(n); ++i)
    {
        if (n % i ==0) 
        {
            return false;
        }
    }
    return true;
}