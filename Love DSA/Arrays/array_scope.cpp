#include <iostream>

using namespace std;

void updatearr(int arr[], int size)
{
  cout << "Entered the updatearr function. " << endl;
  arr[0] = 120;
  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nExited the updatearr function. " << endl;
}

int main()
{
  int arr[3] = {1, 2, 3};
  updatearr(arr, 3); // address of the first element of the array is passed which is totally different from pass by value.

  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}