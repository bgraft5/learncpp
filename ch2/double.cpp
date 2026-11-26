// double function
#include <iostream>

int doubleNumber(int x) { return 2 * x; }

int main() {
  int a{};
  int b{};
  std::cout << "Enter an integer to double: ";
  std::cin >> a;
  b = doubleNumber(a);
  std::cout << "Doubled is " << b << "\n";
  return 0;
}
