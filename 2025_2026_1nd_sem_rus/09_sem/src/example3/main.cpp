#include <iostream>
#include <random>

template<typename T>
T multiply(T a, T b) {
  return a * b;
}
template<typename T>
std::string multiply(const std::string& str, T count) {
  std::string res;
  for (T i = 0; i < count; ++i) {
    res += str;
  }
  return res;
}
// "a" * 3 = "aaa"
int main() {
  std::cout << multiply(5, 3) << '\n';
  std::cout << multiply("hi", 3) << '\n';
  return 0;
}