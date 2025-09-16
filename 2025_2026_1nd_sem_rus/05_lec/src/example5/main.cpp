#include <iostream>

int main() {
    int a = 5;
    std::cout << &a << ' ' << *(&a) << '\n';
    for (int i = 0; i < 3; ++i) {
        *(&a + i) = i + 1;
    }
    for (int i = 0; i < 3; ++i) {
        std::cout << *(&a + i) << ' ';
    }
    return 0;
}
