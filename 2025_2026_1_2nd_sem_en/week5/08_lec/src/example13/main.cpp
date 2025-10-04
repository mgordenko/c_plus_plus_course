#include <iostream>

int factorial(int n) {
  // if (n <= 1)
  //   return 1;
  return n * factorial(n - 1);
}
// factorial(5) = 5 * factorial(4)
// factorial(4) = 4 * factorial(3)
int main() {
  std::cout << factorial(5) << '\n';
  return 0;
}