#include <iostream>
short x3 = 9;
short x4 = 9;
int main() {
    short x1 = 2;
    std::cout << x1 << ' ' << &x1 << '\n';
    short x2 = 2;
    std::cout << x2 << ' ' << &x2 << '\n';
    std::cout << x3 << ' ' << &x3 << '\n';
    std::cout << x4 << ' ' << &x4 << '\n';
    return 0;
}
