#include <iostream>

int main() {
  const int x = 10;
  const int* p = &x;
  int* q=(int*)(p);
  *q = 20;
  std::cout<< x << ' ' << *q;
}