#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Enter a number: " << endl;
  cin >> n;
  int i = 2;
  while (i < n)
  {
    if (n % i == 0)
    {
      cout << "Not-Prime" << endl;
      return 0;
    }
    i += 1;
  }
  cout << "Prime" << endl;
  return 0;
}