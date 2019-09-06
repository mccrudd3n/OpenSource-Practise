#include <iostream>
#include <string>

int DayOfWeek()
{
    using namespace std;

    enum DaysOfWeek
    {
      Sunday =0,
      Monday,
      Tuesday,
      Wednesday,
      Thursday,
      Friday,
      Saturday
    };

    cout << "Find what days of the week are named after" << endl;
    cout << "Enter a Number 0=Sunday -> 6= Saturday" << endl;

    int Day = Sunday; //Initialized to Sunday
    cin >> Day;

    if (Day == Sunday)
    cout << "Sunday was named after the Sun" << endl;
    else if (Day == Monday)
    cout << "Monday was named after the Moon" << endl;
    else if (Day == Tuesday)
    cout << "Tuesday was named after the Mars" << endl;
    else if (Day == Wednesday)
    cout << "Wednesday was named after the Mercury" << endl;
    else if (Day == Thursday)
    cout << "Thursday was named after the Jupiter" << endl;
    else if (Day == Friday)
    cout << "Friday was named after the Venus" << endl;
    else if (Day == Saturday)
    cout << "Saturday was named after the Saturn" << endl;
    else 
    cout << "Invalid Number" << endl;
}
int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.4 What days of the week are names after." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    DayOfWeek();

    return 0;
}
