#include <iostream>

int main() {
  int x = 2000000000;
  int y = 2000000001;
  x = x + y;
  std::cout << x << ' ' << y << '\n';
  y = x - y;
  x = x - y;
  std::cout << x << ' ' << y;
  return 0;
}