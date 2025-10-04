#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // 1) create int a, short b, char c variables;
    // 2) see on adresses
    // 3) see &a - &b, &a - &c, b - &c. If its needed
    // cast pointers. Explain
  int a = 5;
  short b = 10;
  char c = 'a';
  std::cout << a << ' ' << b << ' ' << c << '\n';
  std::cout << &a << '\n';
  std::cout << &b << '\n';
  std::cout << (void*)&c << '\n';
  std::cout << ((char*)&b - (char*)&a) << '\n';
  std::cout << ((char*)&c - (char*)&a) << '\n';
  std::cout << (&c - (char*)&a) << '\n';
}
