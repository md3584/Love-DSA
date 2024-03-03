#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  char ch = '0';

  switch (ch)
  {
  case '0':
    cout << n << endl;
    // break;
    break;
  case 1:
    cout << n + 1 << endl;
    break;

  default:
    cout << "Not 1 or 0." << endl;
    break;
  }

  return 0;
}

// #include <iostream>
// #include <cstdlib> // Include the header for exit()

// int main()
// {
//   int n = 1;
//   while (true)
//   {
//     // Your code inside the infinite loop
//     // ...

//     // When you want to exit the loop:
//     if (n == 1)
//     {
//       std::cout << "Exiting the loop..." << std::endl;
//       exit(0); // Terminate the program
//     }
//   }

//   // Code after the loop (will not be executed if exit() is called)
//   std::cout << "Program continues after the loop." << std::endl;
//   return 0;
// }
