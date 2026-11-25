// 1.4
#include <iostream>

int main() {
  std::cout << "Enter two numbers: \n";

  int x{};
  int y{};
  std::cin >> x >> y;

  std::cout << "The numbers you entered are " << x << " and " << y << '\n';
  return 0;
}
