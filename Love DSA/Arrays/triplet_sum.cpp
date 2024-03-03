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

void tripletSum(int arr[], int n, int ans)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if ((arr[i] + arr[j] + arr[k]) == ans)
        {
          cout << "The triplet is: " << arr[i] << " " << arr[j] << " " << arr[k] << endl;
        }
      }
    }
  }
}

int main()
{
  int size = 0;
  cout << "Input size of the array: ";
  cin >> size;
  int arr[100] = {0};
  arrayInput(arr, size);
  printArray(arr, size);
  int sum = 0;
  cout << "Input the triplet sum: ";
  cin >> sum;
  tripletSum(arr, size, sum);
  return 0;
}