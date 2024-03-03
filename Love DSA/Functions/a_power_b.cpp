#include <iostream>

using namespace std;

int power(int x, int y)
{
  int ans = 1;
  for (int i = 1; i <= y; i++)
  {
    ans = ans * x;
  }
  return ans;
}

int main()
{
  int a, b, ans;
  cout << "Enter the values of a and b: " << endl;
  cin >> a >> b;

  ans = power(a, b);
  cout << a << "^" << b << " is equal to " << ans << endl;
  return 0;
}