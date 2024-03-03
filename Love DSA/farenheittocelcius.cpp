#include <iostream>

using namespace std;

int main()
{
  float c = 0.0, f = 0.0;
  cout << "Enter the value of temp in deg-Farenheit: ";
  cin >> f;
  c = 5 * (f - 32) / 9;
  cout << "Temperature in deg-Celcius is: " << c << endl;
  return 0;
}