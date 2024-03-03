#include <iostream>

using namespace std;

int main()
{
  /*Print no. from 1 to n.*/
  /*int n, N = 1;
  cout << "Enter a number: " << endl;
  cin >> n;
  while (N <= n)
  {
    cout << N << endl;
    N = N + 1;
  }*/

  /*Print sum of numbers till n.*/
  int n, N = 1, sum = 0;
  cout << "Enter a number: " << endl;
  cin >> n;
  while (N <= n)
  {
    sum = sum + N;
    N += 1;
  }
  cout << "The sum from 1 to " << n << " is: " << sum << endl;
  return 0;
}