#include <iostream>

using namespace std;

int main()
{
  // Right triangle
  int n = 0, i = 1;
  cin >> n;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << "*";
      j += 1;
    }
    cout << endl;
    i += 1;
  }
  return 0;
}