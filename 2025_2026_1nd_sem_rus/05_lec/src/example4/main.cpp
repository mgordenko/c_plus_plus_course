#include <iostream>

int main() {
    int a = 1; int b = 2; int c = 3;
    std::cout << &a << ' ' << &b << ' ' << &c << '\n';
    std::cout << &a << ' ' << *&a << '\n';
    std::cout << &a - 1 << ' ' << *(&a - 1) << '\n';
    std::cout << &a - 2 << ' ' << *(&a - 2) << '\n';
    *(&a - 3) = 42;
    std::cout << &a - 3 << ' ' << *(&a - 3) << '\n';
    std::cout << &a - 4 << ' ' << *(&a - 4) << '\n';
    return 0;
}
