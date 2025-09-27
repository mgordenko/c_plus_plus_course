#include <iostream>
#include <algorithm>

unsigned int sum(int n, unsigned int arg1, ...) {
  unsigned int* ptr = &arg1;
  unsigned int res = 0;
  unsigned int inc = 1;
  if((sizeof(void*)/sizeof(unsigned int)) > inc)
    inc = sizeof(void*)/sizeof(unsigned int);
  for(int i = 0; i < n; i++) {
    res += (*ptr);
    ptr += inc;
  }
  return res;
}
int main() {
    std::cout << sum(4, 8, 0, 8, 9);
    return 0;
}
