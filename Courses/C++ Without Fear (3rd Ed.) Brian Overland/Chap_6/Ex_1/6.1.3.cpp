#include <iostream>
using namespace std;

int main()
{
    //definitions
    int arr[7], i, sum;
    
    cout << "Enter 7 Array Elements " << endl;    
    for (i = 0; i < 7; i++) 
    {
    // Reading User Input sales value Based on index
        cin >> arr[i]; //i is index 
    }
    for(int i=0;i<7;i++)
        {
            sum = sum+arr[i];
            cout << " " << arr[i];
        }
    cout << "Total Sum is " << sum-1 << endl;
    return 0;
}