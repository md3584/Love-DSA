#include <iostream>

using namespace std;

int main()
{
  int a = 0, b = 0, ans = 0;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << endl;
  cout << "Enter the value of b: ";
  cin >> b;

  cout << endl;

  char op;
  cout << "Enter the operation: ";
  cin >> op;

  switch (op)
  {
  case '+':
    ans = a + b;
    break;
  case '-':
    ans = a - b;
    break;
  case '*':
    ans = a * b;
    break;
  case '/':
    ans = a / b;
    break;
  case '%':
    ans = a % b;
    break;
  default:
    cout << "Invalid input Operator. " << endl;
    break;
  }
  cout << endl;
  cout << a << op << b << " is equal to " << ans << endl;

  return 0;
}