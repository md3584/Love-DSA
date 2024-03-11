#include <iostream>

using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
  int s = s, e = e;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (arr[mid] == key)
    {
      return mid;
    }

    if (arr[mid] < key)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }

    mid = s + (e - s) / 2;
  }
  return -1;
}

int getPivot(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}

int findPosition(int arr[], int n, int k)
{
  int pivot = getPivot(arr, n);
  if (k >= arr[pivot] && k <= arr[n - 1], k)
  {
    return binarySearch(arr, pivot, n - 1, k);
  }
  else
  {
    return binarySearch(arr, 0, pivot - 1, k);
  }
}

int main()
{
  int arr[5] = {7, 9, 1, 2, 3};
  int ans = findPosition(arr, 5, 1);
  cout << ans;

  return 0;
}