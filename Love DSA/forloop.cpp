#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  cout << "Printing count from numbers 1 to " << n << endl;
  // for (int i = 1; i <= n; i++)
  // {
  //   cout << i << endl;
  // }
  int i = 1;
  for (;;)
  {
    if (i <= n)
    {
      cout << i << endl;
    }
    else
    {
      break;
    }
    i += 1;
  }
  return 0;
}