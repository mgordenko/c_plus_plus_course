#include <iostream>

int main() {
  int x = 0;
  int* px = &x;
  const int* px2 = &x;
  int const* px3 = &x;
  std::cout << "x = " << x << '\n';
  *px = 90;
  *px2 = 90;
  *px3 = 90;
}