#include <iostream>
#include <cstdint>

int main() {
  short x = 10;
  short* px = &x;
  std::cout << &px << ' ' << px << ' ' << x << std::endl;
  std::cout << sizeof(px) << ' ' << sizeof(x) << std::endl;
  short& rx = x; // нет отдельного места
  std::cout << &rx << ' ' << rx << ' ' << x << std::endl;
  std::cout << sizeof(rx) << ' ' << sizeof(x) << std::endl;
}

