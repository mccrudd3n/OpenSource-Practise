/* Code Edited to include double

This code will arrange 10 double numbers into order from the largest to the smallest
*/

#include <iostream>

using namespace std;

void sort(double n);
void swap(double *p, double *p2);

double a[10];

int main()
{
    for (int i = 0 ; i < 10 ; ++i)
    {
        cout << "Enter array element #" << i << ": ";
        cin >> a[i];

    }

    sort(10);

    cout << "Here is the array, sorted: " << endl;
    for (int i = 0 ; i < 10; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}

void sort (double n)
{
    double lowest =0;
    for(int i = 0 ; i < n-1 ; ++i)
    {
        int low =i;
        for (int  j = i + 1; j < n ; ++j)
        {
            if ( a[j] < a[low]) 
            {
                low =j;
            }
        }
        if (i != low)
        {
            swap( &a[i], &a[low] );
        }
    }
}

void swap(double *p1, double *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
