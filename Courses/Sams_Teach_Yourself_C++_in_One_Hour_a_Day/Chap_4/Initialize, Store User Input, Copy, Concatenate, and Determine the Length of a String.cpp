#include <iostream>
#include <string>

int String()
{
    using namespace std;

    string Greeting ("Greeting string");
    cout << Greeting << endl;

    //First Line of text
    cout << "Enter your first line of text" << endl;
    string FirstTxt;
    getline(cin, FirstTxt);
    //Second Line of text
    cout << "Enter your second line of text" << endl;
    string SecTxt;
    getline(cin, SecTxt);

    //Concat both text
    cout << "Result of concatenation: " << endl;
    string Concat = FirstTxt + " " + SecTxt;
    cout << Concat << endl;

    //String Copy to second Var
    cout << "Copy of concatenated string: " << endl;
    string Var;
    Var = Concat;
    cout << Var << endl;

    //Output the Length of the string
    cout << "Length of concat string: " << Concat.length() << endl;

}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "This function presents a method of Using std::string to Initialize, Store User Input, Copy, Concatenate, and Determine the Length of a String" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    String();

    return 0;
}
