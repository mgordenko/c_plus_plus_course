#include <iostream>
#include <string>

int main() {
  int x = 25185; // 256*98 + 97
  std::cout << x << ' ' << &x << '\n';
  int* px = &x;
  char *px2 = (char*)px;
  char *px3 = (char*)px + 1;
  std::cout << *px2 << ' ' << (void*)px2 << '\n';
  std::cout << *px3 << ' ' << (void*)px3 << '\n';
}
