#include <iostream>
#include <cmath>

using namespace std;

void get_recursive(int n);
int main()
{

    while(true)
    {
    int n;
    cout << endl;
    cout << "Enter a number (0 = Exit): " << endl;
    cin >> n;

    if(n == 0)
    {
        break;
    }
    cout << "Triangle of " << n << " are" <<endl;
    get_recursive(n);
    }
    return 0;
}

void get_recursive(int n)
{
    for (int i=n; i >= 1; i--)
    {
        cout << i << " ";
        if(i==1){
            break;
        }  
    }
}
