#include <iostream>

using namespace std;

int main()
{
  // Numbered right angled triangle
  int n = 0;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << i;
      j += 1;
    }
    i += 1;
    cout << endl;
  }
  return 0;
}