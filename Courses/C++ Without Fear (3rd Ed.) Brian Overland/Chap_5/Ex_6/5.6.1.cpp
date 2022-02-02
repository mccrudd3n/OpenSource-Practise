#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int rand_0toN1(int n);

int main() 
{
    int n = 0;
    int r = 0;

    srand(time(nullptr));
    cout << "Enter number of dice to roll: " << endl;
    cin >> n;
    for (int i = 1; i <=n; ++i) {
        r=rand_0toN1(7);
        cout << r << " " << endl;
    }
    return 0;
}

int rand_0toN1(int n){
    return rand() % n;
}
