#include <iostream>

int main() {
  int x = 0;
  int* px = &x;
  int* const px2 = &x;
  std::cout << "x = " << x << '\n';
  *px = 90;
  *px2 = 90;
  // px2 = &x;
  std::cout << "x = " << x << '\n';
}