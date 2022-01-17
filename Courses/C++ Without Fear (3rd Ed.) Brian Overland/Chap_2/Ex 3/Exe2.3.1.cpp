#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number and press Enter" << endl;
    cin >> n;

    if(n>0 && n<100){
        cout << "Number is between 0 and 100" << endl;
    }
    else {
        cout << "Number is out of range" << endl;
    }
    return 0;

}