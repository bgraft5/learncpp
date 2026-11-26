// main function for compiling across multiple files
#include <iostream>

int add(int x,
        int y); // using a forward declaration to access the function in add.cpp

int main() {
  std::cout << "The sum of 3 and 4 is " << add(3, 4) << ".\n";
  return 0;
}
