#include <iostream>

int main() {
  int a = 10;
  const int& ra = a;
  a = 19;
  //ra = 100; // CE
  std::cout << ra << ' ' << a << std::endl;
  return 0;
}

