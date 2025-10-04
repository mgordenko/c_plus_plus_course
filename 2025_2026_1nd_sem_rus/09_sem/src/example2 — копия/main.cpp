#include <iostream>
#include <random>

template <typename T>
bool isEqual(T a, T b) {
  return a == b;
}
template<>
bool isEqual(double a, double b) {
  return std::abs(a - b) < 1e-9;
}
template <typename T>
bool isEqual(T* a, T* b) {
  return *a == *b;
}
template<>
bool isEqual(double* a, double* b) {
  return std::abs(*a - *b) < 1e-9;
}
int main() {
  std::cout << isEqual(10, 10) << '\n';
  std::cout << isEqual<double>(0.1 + 0.2, 0.3) << '\n';
  int a = 10;
  int b = 10;
  int* pa = &a; // 0x...a
  int *pb = &b; // 0x...e
  std::cout << isEqual(pa, pb) << '\n';
  return 0;
}