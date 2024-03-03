#include <iostream>

using namespace std;

int factorial(int n)
{
  int ans = 1;
  for (int i = 1; i <= n; i++)
  {
    ans = ans * i;
  }
  return ans;
}

int nCr(int n, int r)
{
  int ans;
  ans = (factorial(n) / (factorial(n - r) * factorial(r)));
  return ans;
}

int main()
{
  int n, r;
  n = r = 0;
  cout << "Enter the value of n: " << endl;
  cin >> n;
  cout << "Enter the value of r: " << endl;
  cin >> r;
  int answer = nCr(n, r);
  cout << "nCr is = " << answer << endl;
  return 0;
}