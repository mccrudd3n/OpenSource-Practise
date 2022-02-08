#include <iostream>

using namespace std;

void convert_temp (double *C);

int main()
{
    double in_put = 0.0;
    cout << " Centigrade to Fahrenheit Converter" << endl;
    cout << "Enter a number " << endl;
    cin >> in_put;

    convert_temp(&in_put);
    cout << in_put << " Fahrenheit" << endl;

}

void convert_temp (double *C)
{
    *C = ((*C*1.8)+32);
}