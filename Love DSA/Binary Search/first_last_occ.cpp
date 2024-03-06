#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int key)
{
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      e = mid - 1;
    }

    else if (arr[mid] > key)
    {
      e = mid - 1;
    }

    else if (arr[mid] < key)
    {
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}

int lastOcc(int arr[], int n, int key)
{
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      s = mid + 1;
    }

    else if (arr[mid] > key)
    {
      e = mid - 1;
    }

    else if (arr[mid] < key)
    {
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  int arr[15] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 13};
  int key = 3;

  int firstvalue = firstOcc(arr, 15, key);
  cout << "First occurence of " << key << " is at index: " << firstvalue << endl;

  int lastvalue = lastOcc(arr, 15, key);
  cout << "Last occurence of " << key << " is at index: " << lastvalue << endl;
  // total no. of occurence of the number in a sorted array.
  cout << "The number " << key << " has occured " << (lastvalue - firstvalue) + 1 << " times." << endl;
  return 0;
}