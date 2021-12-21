#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "Enter a number and press ENTER: " << endl;
    cin >> n;
    
    if(n % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." <<endl;
    }
    return 0;
}