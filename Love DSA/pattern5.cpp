#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;

  int count = 1, i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << count << " ";
      j += 1;
      count += 1;
    }
    cout << endl;
    i += 1;
  }
  return 0;
}