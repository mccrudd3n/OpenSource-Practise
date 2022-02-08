#include <iostream> 

using namespace std;

void triple_it (int *p);

int main()
{
    int in_put =0;

    cout << "Enter number and press Enter: " << endl;
    cin >> in_put;

    triple_it(&in_put);

    cout << "Original number now = " << in_put << endl;


}

void triple_it (int *p)
{
    *p = *p *3;
}