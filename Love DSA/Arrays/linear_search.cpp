#include <iostream>

using namespace std;

bool linear_search(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (key == arr[i])
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
  int arr[10] = {-11, 5, 4, 0, -8, -2, 20, 16, 1, -3};

  int key;
  cout << "Enter the key element to search: " << endl;
  cin >> key;

  bool ans = linear_search(arr, 10, key);
  if (ans)
  {
    cout << "Element found\n";
  }
  else
  {
    cout << "Element not found\n";
  }
  return 0;
}