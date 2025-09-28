#include <iostream>

int main() {
  int x = 1684234849; // 100 99 98 97
  int* px = &x;
  std::cout << px << ' ' << *px << std::endl;
  char* b0 = (char*)px;
  char* b1 = b0 + 1;
  char* b2 = b0 + 2;
  char* b3 = b0 + 3;
  std::cout << (void*)b0 << ' ' << *b0 << std::endl;
  std::cout << (void*)b1 << ' ' << *b1 << std::endl;
  std::cout << (void*)b2 << ' ' << *b2 << std::endl;
  std::cout << (void*)b3 << ' ' << *b3 << std::endl;
}

