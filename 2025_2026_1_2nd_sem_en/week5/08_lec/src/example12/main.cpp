#include <iostream>
void smth1(int& a) {
  a = 1000;
}
void smth2(const int& a) {
  // a = 1000;
}
int main() {
  int a = 2;
  smth2(a);
  std::cout << a << '\n';
}