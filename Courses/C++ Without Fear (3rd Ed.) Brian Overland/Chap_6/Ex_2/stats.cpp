#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand_0toN1(int n);
int hits[10];

int main()
{
    int n=0, r=0;

    srand(time(nullptr));

    cout << "Enter how many trials" << endl;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        r = rand_0toN1(10);
        ++hits[r];
    }

    for (int i=0; i<10; ++i){
        cout << i << ": " << hits[i] << " Accurancy: ";
        double results = hits[i];cout << results /(n/10.0) << endl;
    }
    return 0;
}


int rand_0toN1(int n){
    return rand()%n;
}