#include <iostream>

using namespace std;

int arr_sum(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
  return sum;
}

int main()
{
  int arr[100] = {0};
  int size;
  cout << "Enter the size of array: " << endl;
  cin >> size;
  cout << "Enter any 5 integers: " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int ans = arr_sum(arr, size);
  cout << "Sum: " << ans;
  return 0;
}