#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void arrayReverse(int arr[], int n)
{
  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  printArray(arr, n);
}

int main()
{
  int arr[6] = {2, 4, 6, 7, -7, 1};
  int brr[5] = {8, 6, 2, -8, 0};

  cout << "Arrays before reversal: " << endl;
  printArray(arr, 6);
  printArray(brr, 5);

  cout << "Arrays after reversal: " << endl;
  arrayReverse(arr, 6);
  arrayReverse(brr, 5);

  return 0;
}