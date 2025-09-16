#include <iostream>

int main() {
    int a = 1; int b = 2; int c = 3;
    std::cout << &a << ' ' << &b << ' ' << &c << '\n';
    std::cout << &c << ' ' << *&c << '\n';
    std::cout << &c + 1 << ' ' << *(&c + 1) << '\n';
    std::cout << &c + 2 << ' ' << *(&c + 2) << '\n';
    std::cout << &c + 3 << ' ' << *(&c + 3) << '\n';
    std::cout << &c + 4 << ' ' << *(&c + 4) << '\n';
    return 0;
}
