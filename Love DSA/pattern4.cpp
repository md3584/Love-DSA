#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  cout << "Enter the no. of rows: " << endl;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << n - j + 1;
      j += 1;
    }
    i = i + 1;
    cout << endl;
  }

  return 0;
}