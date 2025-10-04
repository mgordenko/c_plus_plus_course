#include <iostream>
void smth1(int* a) { // a - copy
  std::cout << &a << '\n';
  *a = 100;
}
void smth2(int* a) {
  int s = 9;
  std::cout << &a << '\n';
  std::cout << a << '\n';
  a = &s;
  std::cout << &a << '\n';
  std::cout << a << '\n';
  std::cout << *a << '\n';
}
int main() {
  int a = 2;
  int*pa = &a;
  std::cout << &pa << '\n';
  smth2(pa); // copy
  std::cout << a << '\n';
}