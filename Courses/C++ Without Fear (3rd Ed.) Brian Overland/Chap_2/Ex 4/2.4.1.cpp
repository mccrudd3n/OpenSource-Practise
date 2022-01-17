#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n=0;
    int i=2;
    bool is_prime = true;
    double root;

    cout << "Enter a number and press Enter" << endl;
    cin >> n;

    root = sqrt(n);

    while (i <= root){
        if (n % 1 == 0) {
            is_prime = false;
        }
        ++i;
    }

    if(is_prime) {
        cout << "Number is prime" << endl;
    }
    else {
        cout << "Number NOT prime" << endl;
    }
    return 0;
}