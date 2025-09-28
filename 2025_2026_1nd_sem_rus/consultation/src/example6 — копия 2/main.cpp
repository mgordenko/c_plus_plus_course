#include <iostream>
#include <vector>
#include <algorithm>

void print(int count, int a, ...) { // ошибка
  int* pa = &a;
  for (int i = 0 ; i < count ; ++i) {
    std::cout << *(pa - i) << ' ';
  }
}

void print1(int count, ...) {
  va_list args;
  va_start(args, count);
  for (int i = 0 ; i < count ; ++i) {
    std::cout << va_arg(args, short) << ' ';
  }
  va_end(args);
}

int main() {
  print1(9, 2543721868241, 2, 3, 4, 2543721868241, 6, 7, 8, 9);
  return 0;
}