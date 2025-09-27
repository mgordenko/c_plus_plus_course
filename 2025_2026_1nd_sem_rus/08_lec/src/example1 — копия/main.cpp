#include <iostream>

void func(int& a, const int& b) {
  a *= 10;
  //b *= 20;
}
int main() {
    int x = 2, y = 3;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    func(x, y);
    std::cout << x << std::endl;
    std::cout << y << std::endl;
}
