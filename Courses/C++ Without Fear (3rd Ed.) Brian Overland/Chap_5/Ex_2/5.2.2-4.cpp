#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n, double sqt);

int main()
{
    int count_min = 0;
    int count_max = 0;
    int n;
    int i;

    while(true)
    {
        cout << "Enter a min number and press ENTER (0 = Exit) " << endl;
        cin >> count_min;
        cout << "Enter a max number and press ENTER " << endl;
        cin >> count_max;

        for (int i = count_min; i <= count_max; ++i )
        {
          
        double sqt = sqrt(i);

        if (i==0)
        {
            break;
        }
        if (prime(i, sqt))
        {
            cout << i << " is prime" << endl;
        }

        else
        {
            cout << i << endl;
        }

        }
        
    }
    return 0;
}

/* Prime-number function. Test divisors from 2 to sqrt of n. 
Return false of a divisor found; otherwise, return true. */

bool prime(int n, double sqt) 
{
    for (int i = 2; i<= sqt; ++i)
    {
        if (n % i ==0) 
        {
            return false;
        }
    }
    return true;
}