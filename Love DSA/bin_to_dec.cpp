#include <iostream>
#include <math.h>

using namespace std;
// Binary to decimal converter.
int main()
{
  int n;
  cout << "Enter a number (in binary number system): ";
  cin >> n;

  int i = 0, ans = 0;

  while (n != 0)
  {
    int digit = n % 10;
    if (digit == 1)
    {
      ans = ans + pow(2, i);
    }
    n = n / 10;
    i++;
  }
  cout << ans;
  return 0;
}