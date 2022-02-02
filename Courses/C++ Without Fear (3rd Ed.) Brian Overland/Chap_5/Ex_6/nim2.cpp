#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int rand_0toN1(int n);

int main() 
{
    int total =0, n=0;

    srand(time(nullptr));
    cout << "Welcome to NIM. Pick a starting total: " << endl;
    cin >> total;
    while (true)
    {
        if ((total % 3) == 2)
        {
        total = total - 2;
        cout << "I am subtracting 2." << endl;
        }
        else if ((total %3) == 1){
            --total;
            cout << "I am subtracting 1." << endl;
        } else {
        n = 1+ rand_0toN1(2);
        total = total -n;
        cout << "I am subtracting ";
        cout << n << "." << endl;
        }

    cout << "New total is " << total << endl;
    if (total <= 0)
    {
        cout << "I win!" << endl;
        break;
    }

    cout << "Enter num to subtract (1 or 2): " << endl;
    cin >> n;
    while (n<1 || n>2)
    {
        cout << "Input must be 1 or 2" << endl;
        cout << "Re-enter: "<< endl;
        cin >> n;
    }
    total = total -n;
    cout << "New total is: " << total << endl;
    if (total <= 0)
    {
        cout << "You win!" << endl;
        break;
    }
}
    return 0;
}

int rand_0toN1(int n){
    return rand() % n;
}