#include <iostream>

void swap(int *a, int *b) {
  *a += *b;
  *b -= *a;
  *a += *b;
  *b *= -1;
}

int main() {
  int a = 10, b = 20;
  std::cout << a << ' ' << b << '\n';
  swap(&a, &b);
  std::cout << a << ' ' << b;
  return 0;
}
