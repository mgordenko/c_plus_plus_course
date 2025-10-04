#include <iostream>
#include <random>

template<typename T = int, int DefaultValue = 1>
T multiply(T a, T b) {
  return a * b;
}
int main() {
  std::cout << multiply(5) << '\n';
  std::cout << multiply(5, 3) << '\n';
  return 0;
}