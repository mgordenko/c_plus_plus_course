#include <iostream>
#include <string>

int add(int a, int b) {
  return a + b;
}
int main() {
  std::function<int(int, int)> func1 = add;
  std::function<int(int, int)> func2 = [](int a, int b) {
    return a * b;
  };
  std::function<void()> f1;
  std::function<int(int)> f2;
  std::function<int(int, double)> f3;
  std::function<int(int&, double)> f4;
  std::cout << func1(4, 5);
}
