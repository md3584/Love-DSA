#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
  cout << "Printing the array." << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Printing done." << endl;
}

int main()
{
  // initialising an array
  int first[15] = {0};

  // accessing an array
  cout << "Value at 14 index is " << first[14] << endl;
  // cout << "Value at 20 index is " << first[20] << endl; // gives out a garbage value.

  int second[3] = {3, 5, 8};
  cout << "Value at 2 index is " << second[2] << endl;
  cout << "Value at 5 index is " << second[5] << endl;

  int third[15] = {2, 5};
  cout << "Value at 1 index is " << third[1] << endl;
  cout << "Value at 14 index is " << third[14] << endl; // all other values are initialised as 0

  int n = 15;
  // printArray(third, 15);

  int fourth[15] = {0}; // initialize the whole array with 0
  n = 15;
  // printArray(fourth, 15);

  int fifth[20] = {1}; // does not initialize the whole array with 1
  n = 20;
  // printArray(fifth, 20);

  // find the actual lenght of an array.
  int sizefifth = sizeof(fifth) / sizeof(int);
  cout << "The total size/length of the fifth array is " << sizefifth << endl;

  char ch[5] = {'a', 'e', 'i', 'o', 'u'};
  cout << "Printing the character array." << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << ch[i] << " ";
  }
  cout << endl;
  cout << "Printing done." << endl;

  float firstFloat[6];
  double firstDouble[8];
  bool firstBool[10];
  unsigned long firstunsignedLong[2000];

  cout << "\nKoi dikkat nahi hai!!\n";
  return 0;
}