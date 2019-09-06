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

    switch (Day)
    {
    case Sunday:
    cout << "Sunday was named after the Sun" << endl;
    break;
    case Monday:
    cout << "Monday was named after the Moon" << endl;
    break;
    case Tuesday:
    cout << "Tuesday was named after the Mars" << endl;
    break;
    case Wednesday:
    cout << "Wednesday was named after the Mercury" << endl;
    break;
    case Thursday:
    cout << "Thursday was named after the Jupiter" << endl;
    break;
    case Friday:
    cout << "Friday was named after the Venus" << endl;
    break;
    case Saturday:
    cout << "Saturday was named after the Saturn" << endl;
    break;
    default:
    cout << "Invalid Number" << endl;
    break;
  }
}
int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.5 What days of the week are names after. using switch-case, break, and default" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    DayOfWeek();

    return 0;
}
