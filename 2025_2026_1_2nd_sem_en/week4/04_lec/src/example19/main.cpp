#include <iostream>

int main() {
  // Read integer value as the sequence of char
  // values, by using pointers. Explain result.

  int a = 1684234849;
  int* pa = &a;
  char* pa_char = (char*)&a;
  std::cout <<  (void*)pa_char << ' ' << pa_char << '\n';
  std::cout <<  (void*)(pa_char + 1) << ' ' << (pa_char + 1) << '\n';
  std::cout <<  (void*)(pa_char + 2) << ' ' << (pa_char + 2) << '\n';
  std::cout <<  (void*)(pa_char + 3) << ' ' << (pa_char + 3) << '\n';

  return 0;
}