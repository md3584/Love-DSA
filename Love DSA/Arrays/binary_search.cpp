#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (key == arr[mid])
    {
      return mid;
    }
    if (key > arr[mid]) // go to right wala part
    {
      start = mid + 1;
    }
    if (key < arr[mid]) // go to left wala part
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2; // using (start + end)/2 will result in error.
  }
  return -1; // key not found
}

int main()
{
  int oddarr[5] = {5, 6, 9, 23, 31};
  int evenarr[6] = {4, 6, 8, 25, 65, 77};

  int oddIndex = binarySearch(oddarr, 5, 9);
  cout << "9 is at the index=" << oddIndex << endl;

  int evenIndex = binarySearch(evenarr, 6, 25);
  cout << "25 is at the index=" << evenIndex << endl;
  return 0;
}