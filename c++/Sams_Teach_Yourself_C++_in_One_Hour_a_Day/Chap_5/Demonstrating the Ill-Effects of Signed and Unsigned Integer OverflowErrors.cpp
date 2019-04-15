

#include <iostream>


int OverflowErrors()
{
    using namespace std;
    unsigned short UShortValue = 65535;
    cout << "Incrementing unsigned short " << UShortValue << " gives: ";
    cout << ++UShortValue << endl;
    short SignedShort = 32767;
    cout << "Incrementing signed short " << SignedShort<< " gives: ";
    cout << ++SignedShort << endl;
    cout << "-------" << endl;
    cout << "As you see, the output indicates that unintentional overflow situations result\
    in unpre-dictable and unintuitive behavior for the application.\ If you were using the integer valuesin question to allocate memory,\
     then with the unsigned short, you can reach a pointwhere you request zero bytes when your actual need is 65,536 bytes." << endl;
}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "This function Demonstrating the Ill-Effects of Signed and Unsigned Integer OverflowErrors" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    OverflowErrors();

    return 0;
}
