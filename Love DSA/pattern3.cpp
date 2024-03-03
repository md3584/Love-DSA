#include <iostream>

using namespace std;

int main()
{
  int n = 0, i = 1;
  cout << "Enter a number: " << endl;
  cin >> n;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << "*";
      j += 1;
    }
    cout << endl;
    i += 1;
  }

  return 0;
}