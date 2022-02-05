#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand_0toN1(int n);
int hits[5];

int main()
{
    int n=0;

    srand(time(nullptr));

    cout << "Enter how many trials" << endl;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int r = rand_0toN1(5);
        ++hits[r];
    }

    for (int i=0; i<5; ++i){
        cout << i << ": " << hits[i] << " Accurancy: ";
        double results = hits[i];cout << results /(n/10.0) << endl;
    }
    return 0;
}


int rand_0toN1(int n){
    return rand()%n;
}