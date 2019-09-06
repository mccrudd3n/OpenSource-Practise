#include <iostream>

using namespace std;

class FishDummyMember
{
public:
  FishDummyMember()
  {
    cout << "FishDummyMember Constructor " << endl;
  }
  ~FishDummyMember()
  {
    cout << "FishDummyMember destructor" << endl;
  }
};

class Fish
{
protected:
  FishDummyMember dummy;

public:
  //Fish Constructor
  Fish()
  {
    cout << "Fish Constructor" << endl;
  }
  ~Fish()
  {
    cout << "Fish destructor" << endl;
  }
};

class TunaDummyMember
{
public:
  TunaDummyMember()
  {
    cout << "TunaDummyMember Constructor" << endl;
  }
  ~TunaDummyMember()
  {
    cout << "TunaDummyMember destructor" << endl;
  }
};

class Tuna: public Fish
{
private:
  TunaDummyMember dummy;
public:
  Tuna()
  {
    cout << "Tuna Constructor" << endl;
  }
  ~Tuna()
  {
    cout << "Tuna destructor" << endl;
  }
};

int main()
{
  Tuna myDinner;
}
