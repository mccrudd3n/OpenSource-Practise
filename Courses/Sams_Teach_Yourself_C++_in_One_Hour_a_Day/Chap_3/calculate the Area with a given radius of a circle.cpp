#include <iostream>

int RadCalculation()
{
    using namespace std;
    const double Pi = 22.0/7;
    auto rad = 0;
    cout << "What is the Radius of the circle? " << endl;
    cin >> rad;

    double area = Pi*(rad*rad);
    cout << "The Area of the circle is " << area << endl;

}


int main()
{
    using namespace std;
    cout << "This Program provides the user a way to calculate the Area with a given radius of a circle" << endl;

    //Functions are Invoked here
    RadCalculation();

    return 0;
}
