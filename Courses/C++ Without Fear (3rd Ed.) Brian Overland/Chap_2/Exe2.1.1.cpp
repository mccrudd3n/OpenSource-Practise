#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "Enter a number and press ENTER: " << endl;
    cin >> n;
    if(n % 7 ==0) {
        cout << "The number is divisible by 7." << endl;
    } else {
        cout << "The number is not divisble by 7." <<endl;
    }
    return 0;
}