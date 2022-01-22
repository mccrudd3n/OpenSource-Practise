

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n=0;
    bool is_prime = true;
    double sqrt_of_n;

    cout << "Enter a number and press Enter: " << endl;
    cin >> n;

    sqrt_of_n = sqrt(n);

    for (int i = 2; i <= sqrt_of_n; ++i) 
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime) 
    {
        cout << "Number is Prime " << endl;
    }
    else 
    {
        cout << "Number is not Prime " << endl;
    }

    return 0;

}
