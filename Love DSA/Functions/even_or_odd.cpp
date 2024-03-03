#include <iostream>

using namespace std;

// 0-> Odd
// 1-> Even
bool isOdd(int n)
{
  if (n & 1)
  {
    return 0;
  }
  return 1;
}

int main()
{
  int n;
  cout << "Enter a number: " << endl;
  cin >> n;
  bool ans = isOdd(n);
  if (ans == 0)
  {
    cout << n << " is an odd number.\n";
  }
  else
  {
    cout << n << " is an even number.\n";
  }

  return 0;
}