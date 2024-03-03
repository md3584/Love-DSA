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
    int val = i;
    while (j <= i)
    {
      cout << val;
      val = val + 1;
      j += 1;
    }
    cout << endl;
    i += 1;
  }

  return 0;
}

// 1
// 23
// 345
// 4567