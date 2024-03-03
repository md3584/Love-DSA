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

void pairSum(int arr[], int n, int ans)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if ((arr[i] + arr[j]) == ans)
      {
        cout << "The pair is: " << arr[i] << " " << arr[j] << endl;
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
  cout << "Array is: " << endl;
  printArray(arr, size);
  int sum = 0;
  cout << "Input the pair sum: ";
  cin >> sum;
  pairSum(arr, size, sum);
  return 0;
}