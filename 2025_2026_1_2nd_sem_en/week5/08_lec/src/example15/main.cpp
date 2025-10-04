#include <iostream>

int main() {
  int* p = nullptr;
  {
    int x = 1000;
    p = &x;
  }
  std::cout << *p << '\n';
  return 0;
}

