#include <iostream>

template <typename T1, typename T2, typename T3>
T3 printPair(T1 first, T2 second) {
  std::cout << first << ' ' << second;
  return (T3)(first + second);
}

int main() {
  std::cout << printPair<int, double, int>(10, 14.5);
  return 0;
}

