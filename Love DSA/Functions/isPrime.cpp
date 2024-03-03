#include <iostream>

using namespace std;

/*1 -> Prime no.
0 -> not Prime no.*/
bool isPrime(int n)
{
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int n;
  cin >> n;
  bool answer;
  answer = isPrime(n);

  switch (answer)
  {
  case 1:
    cout << n << " is a Prime number" << endl;
    break;

  default:
    cout << n << " is not a Prime number" << endl;
    break;
  }

  return 0;
}