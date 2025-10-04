#include <iostream>
template <class T>
T max(T a, T b) {
  return a > b ? a : b;
}
int main() {
  int res_int = max<int>(10, 20);
  double res_double = max<float>(10.7f, 10.8);
  char res_char = max<char>(100, 'b');
  std::cout << res_int << '\n';
  std::cout << res_double << '\n';
  std::cout << res_char << '\n';
  return 0;
}

