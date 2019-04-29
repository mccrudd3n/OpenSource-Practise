#include <iostream>
#include <string>


using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.8 Allocating Using new[...] and Releasing It Using delete[] " << endl;
  cout << "----------------------------------------------------------" << endl;

  cout << "Enter your name " << endl;
  cout << " >> ";
  string Name;
  cin >> Name;

  // Add 1 to reserve space for a terminating null
  int CharsToAllocate = Name.length() + 1;
  // request for memory to hold copy of input
  char* CopyOfName = new char (CharsToAllocate);
  // strcpy copies from a null-terminated string
  strcpy(CopyOfName, Name.c_str());
  // Display the copied string
  cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;
  //Done using Buffer? delete
  delete[] CopyOfName;

  return 0;
}
