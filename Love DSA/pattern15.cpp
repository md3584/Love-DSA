#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      char ch = 'A';
      cout << ch + j - 1;
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}

// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI