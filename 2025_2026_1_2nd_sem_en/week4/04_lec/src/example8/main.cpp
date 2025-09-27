#include <iostream>
int main() {
  short a = 2;
  short b = 3;
  short c = 4;
  short* pa = &a;
  short* p1 = pa - 1;
  short* p2 = pa - 2;
  short* p3 = pa - 3;
  *p3 = 1000;
  short d = 5;
  std::cout << a << ' ' << &a << '\n';
  std::cout << b << ' ' << &b << '\n';
  std::cout << c << ' ' << &c << '\n';
  std::cout << d << ' ' << &d << '\n';
  std::cout << pa << ' ' << *pa << '\n';
  std::cout << p1 << ' ' << *p1 << '\n';
  std::cout << p2 << ' ' << *p2 << '\n';
  std::cout << p3 << ' ' << *p3 << '\n';
}