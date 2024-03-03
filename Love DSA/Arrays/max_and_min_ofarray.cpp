#include <iostream>
#include <climits>

using namespace std;

int getMax(int arr[], int size)
{
  int maxi = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    // if (arr[i] > max)
    // {
    //   max = arr[i];
    // }
    maxi = max(maxi, arr[i]); // inbuilt functions.
  }
  return maxi;
}

int getMin(int arr[], int size)
{
  int mini = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    // if (arr[i] < min)
    // {
    //   min = arr[i];
    // }
    mini = min(mini, arr[i]); // inbuilt functions.
  }
  return mini;
}

int main()
{
  int size;
  cout << "Size: " << endl;
  cin >> size;

  int arr[100];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << "Maximum value of the array: " << getMax(arr, size) << endl;
  cout << "Minimum value of the array: " << getMin(arr, size) << endl;
  return 0;
}