#include <iostream>
int main() {
  short a = 2;
  short b = 3;
  short c = 4;
  int d = 5;
  std::cout << a << ' ' << &a << '\n';
  std::cout << b << ' ' << &b << '\n';
  std::cout << c << ' ' << &c << '\n';
  std::cout << d << ' ' << &d << '\n';
  std::cout << &a - &b << '\n';
  std::cout << &a - &c << '\n';
  int* px = (int*)(&a);
  std::cout << &a << '\n';
  std::cout << &d << '\n';
  std::cout << px << '\n';
  std::cout << px - &d << '\n';
}