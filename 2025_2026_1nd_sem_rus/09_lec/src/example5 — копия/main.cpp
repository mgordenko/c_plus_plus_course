#include <iostream>
#include <cmath>
#include <string>
#include <concepts>
template<std::integral T>
void process(T value) {
  std::cout << "integer " << value << '\n';
}
template<std::floating_point T>
void process(T value) {
  std::cout << "floating " << value << '\n';
}
int main() {
  process(4);
  process(4.8);
  return 0;
}