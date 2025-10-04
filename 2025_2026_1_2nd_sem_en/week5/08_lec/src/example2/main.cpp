#include <iostream>

int sum(int a, int b);
int sum(int, int);

int main() {
    std::cout << sum(10, 20) << '\n';
}

int sum(int a, int b) {
  return a + b;
}