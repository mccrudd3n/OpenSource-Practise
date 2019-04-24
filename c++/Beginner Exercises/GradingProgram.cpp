#include <iostream>

/*
                            --->>>  Task  <<<---
                              Grading Program
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

★★ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A

*/

using namespace std;

int main()
{
  int Grade = 0;
  cout << endl; // Extra Space
  cout << "Enter the grade scored in a Programming class (0-100)" << endl;
  cout << " >> ";
  cin >> Grade;
  cout << endl;
  if (Grade >= 90 && Grade <= 100)
  cout << "Your Grade is: A" << endl;
  
  else if (Grade >= 80 && Grade <= 89)
  cout << "Your Grade is: B" << endl;

  else if (Grade >= 70 && Grade <= 79)
  cout << "Your Grade is: C" << endl;

  else if (Grade >= 60 && Grade <= 69)
  cout << "Your Grade is: D" << endl;

  else if (Grade >= 0 && Grade <= 59)
  cout << "Your Grade is: F" << endl;

  else if (Grade >= 101)
  cout << "Invalid Number" << endl;

  cout << endl;
  cout << "Program end";

  return 0;

}
