#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  int a = 10;
  for (int i = 1; i >= n; i--)
  {
    int a = 5;
    // cout << i << " " << endl;
    cout << a << endl;
  }
  int b = 10;
  cout << b << endl;
  // cout << i << " ";//not declared in this scope.
  return 0;
}