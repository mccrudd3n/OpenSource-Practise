#include <iostream>

int main()
{

    using namespace std;

    cout <<"What is your name?" << endl;
    string inputname;
    cin >> inputname;
    cout << "What is your Age?" << endl;
    int inputage;
    cin >> inputage;

    cout << "Hello " << inputname << " you are " << inputage << " years old." << endl;


    return 0;
}
