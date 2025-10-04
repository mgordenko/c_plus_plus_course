#include <iostream>
#include <random>
#include <concepts>

template<typename T>
concept Arithmetic = requires(T a, T b) {
  a + b, a - b, a * b, a / b;
};

template<typename T>
concept Printable = requires(std::ostream& os, T value) {
  os << value;
};

template<typename T>
concept FloatingPoint = std::same_as<T, float> ||
  std::same_as<T, double>;

template<typename T>
concept Number = std::integral<T> ||
  std::floating_point<T>;

// template<std::integral T> // целочисленные типы
// template<std::floating_point T> // вещественные типы
// template<std::copyable T> // копируемые типы
// template<std::movable T> // перемещаемы типы

// template<std::equality_comparable T> // можно сравнивать == !=
// template<std::totally_ordered T> // > < >= <=
// template<std::incrementable T> // ++t t++
// template<std::addable T> // t + t

template<Arithmetic T>
T multiply(T a, T b) {
  return a * b;
}
// template<typename T>
// std::string multiply(const std::string& str, T count) {
//   std::string res;
//   for (T i = 0; i < count; ++i) {
//     res += str;
//   }
//   return res;
// }
int main() {
  std::cout << multiply(5, 3) << '\n';
  std::cout << multiply(5.0, 3.7) << '\n';
  //std::cout << multiply("a", 3) << '\n';
  return 0;
}