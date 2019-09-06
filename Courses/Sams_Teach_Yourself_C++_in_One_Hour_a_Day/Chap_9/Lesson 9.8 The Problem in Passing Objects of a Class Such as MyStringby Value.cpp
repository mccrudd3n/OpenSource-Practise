#include <iostream>

using namespace std;

class MyString
{
private:
  char* Buffer;
public:
  //constructor
  MyString (const char* InitialInput)
  {
    if (InitialInput != NULL)
    {
      Buffer = new char [strlen(InitialInput) + 1];
      strcpy(Buffer, InitialInput);
    }
    else
    Buffer = NULL;
  }
  //Destructor
  ~MyString ()
  {
    cout << "Invoking Destructor, Cleaning up " << endl;
    if (Buffer != NULL)
      delete[] Buffer;
  }
  int GetLength()
  {
    return strlen(Buffer);
  }
  const char* GetString()
  {
    return Buffer;
  }
};

void UseMyString (MyString Input)
{
  cout << "String buffer in MyString is " << Input.GetLength();
  cout << " characters long" << endl;
  cout << "Buffer contains: " << Input.GetString() << endl;
  return;
}

int main()
{
  MyString SayHello ("Hello from My String");
  //Passing SayHello to the function
  UseMyString (SayHello);
  return 0;
}
