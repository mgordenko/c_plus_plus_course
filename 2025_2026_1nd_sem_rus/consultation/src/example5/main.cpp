#include <iostream>
#include <cmath>

int sum(int a, int b) {
  return a + b;
}
int main() {
  int (*func)(int, int) = [](int a, int b) -> int {return a + b;};
  std::cout << func(3, 4) << std::endl;
  return 0;
}