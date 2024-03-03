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
      char ch = i + j + 'A' - 2;
      cout << ch;
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}

// ABCD
// BCDE
// CDEF
// DEFG