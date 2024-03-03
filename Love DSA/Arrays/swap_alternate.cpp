#include <iostream>
using namespace std;

void arrayInput(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  return;
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void swapAlternate(int arr[], int n)
{
  int start = 0;
  int end = 1;
  while (end <= n)
  {
    if (end < n)
    {
      swap(arr[start], arr[end]);
    }
    start += 2;
    end += 2;
  }
  cout << "Alternately swapped array is: " << endl;
  printArray(arr, n);
}

int main()
{
  int arr[100] = {0};
  int size = 0;
  cout << "Enter size of the array: \n";
  cin >> size;
  cout << "Enter the array elements: " << endl;
  arrayInput(arr, size);

  cout << "Array is: " << endl;
  printArray(arr, size);

  swapAlternate(arr, size);

  return 0;
}