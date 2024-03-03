#include <iostream>

using namespace std;

int main()
{
  int a;
  cout << "Enter any character: " << endl;
  a = cin.get();
  if (a >= 97 && a <= 122)
  {
    cout << "This is lowercase." << endl;
  }
  if (a >= 65 && a <= 90)
  {
    cout << "This is uppercase." << endl;
  }
  if (a >= 45 && a <= 57)
  {
    cout << "This is numeric." << endl;
  }
  return 0;
}