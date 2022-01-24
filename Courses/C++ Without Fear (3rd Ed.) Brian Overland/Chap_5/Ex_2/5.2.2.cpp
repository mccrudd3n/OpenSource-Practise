/*
I am tasked to enter 2 numbers (c_min and c_max) and to check
if each one is a prime number.

I have created a counter which will replace the user input of n
as seen on 5.2.1.cpp which has been successful but i cant seem to find 
a way to feed this through the other formula.

It seems like I have also managed to try out nested function calls
but I feel that I am going into the wrong direction so I will move on and see
what I can do when I come back to this issue

24/1/22



*/
#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n);
int counter(int c_min, int c_max);

int main()
{
    int c_min = 0;
    int c_max= 0;
    int n;
    while(true)
    {
        cout << "Enter number and press ENTER (0 = Exit) " << endl;
        cin >> c_min;
        cout << "Enter number and press ENTER" << endl;
        cin >> c_max;

        n = counter(c_min,c_max);

        if (c_min==0)
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
    for (int i = n; i <= sqrt(n); ++i)
    {
        if (n % i ==0) 
        {
            return false;
        }
    }
    return true;
}

int counter(int x, int y)
{
    int i;
    for ( i = x ; i <= y; ++i)
    cout << i << endl;
    return i;
}