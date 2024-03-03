#include <iostream>

using namespace std;

int main()
{
  int x = 4;
  int y = 6;
  cout << "x&y: " << (x & y) << endl; // AND
  cout << "x|y: " << (x | y) << endl; // OR
  cout << "~x: " << (~x) << endl;     // NOT
  cout << "x^y: " << (x ^ y) << endl; // XOR

  cout << (5 << 1) << endl; // Left shift
  cout << (3 << 2) << endl;
  cout << (15 >> 1) << endl; // Right shift
  cout << (5 >> 2) << endl;

  int i = 7;
  cout << (++i) << endl;
  cout << (i++) << endl;
  cout << (i--) << endl;
  cout << (--i) << endl;

  return 0;
}