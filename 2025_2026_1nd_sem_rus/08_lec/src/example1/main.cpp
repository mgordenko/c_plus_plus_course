#include <iostream>

int func(int *x) {
  int a = *x * 10;
  //x = &a;
  *x = a;
  return a;
}
int main() {
  int a = 5;
  std::cout << a << std::endl;
  std::cout << func(&a) << std::endl;
  std::cout << a << std::endl;
}
