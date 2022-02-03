#include <iostream>
using namespace std;
int main()
{
    double n=6; double sum=0;
    double arr[] = {10, 22, 13, 99, 4, 5};

    for(int i=0 ;i < n; ++i){
        sum= sum+arr[i]; 
        cout << arr[i] << " ";
    }
    cout << "total sum is " << sum << endl;
    return 0;
}