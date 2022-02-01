#include <iostream>
#include <cmath>

using namespace std;

void get_divisors(int n);
int main()
{

    while(true)
    {
    int n;

    cout << "Enter a number (0 = Exit): " << endl;
    cin >> n;

    if(n == 0)
    {
        break;
    }
    get_divisors(n);
    cout << endl;
    }
    return 0;
}

void get_divisors(int n)
{
    double sqrt_of_n = sqrt(n);
        for (int i=2; i <= sqrt_of_n; ++i)
        {
            if(n%i == 0) {
                cout << i << ", ";
                get_divisors(n /i);
                return;
            }
        }
        cout <<n;
}
