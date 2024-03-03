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

int findUnique(int arr[], int n)
{
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main()
{
  int arr[100] = {0};
  int size = 0;
  cout << "Enter size of the array(even): \n";
  cin >> size;
  cout << "Enter the array elements(one element to be different): " << endl;
  arrayInput(arr, size);

  cout << "Array is: " << endl;
  printArray(arr, size);

  cout << "The unique element in the array is: " << endl;
  int ans = findUnique(arr, size);
  cout << ans;
  return 0;
}