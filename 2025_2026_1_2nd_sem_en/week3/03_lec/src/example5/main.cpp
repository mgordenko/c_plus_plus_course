#include <iostream>
int main() {
    const int x = 0;
    std::cout << x << ' ' << &x << '\n';
    int b = 10;
    int* ptr = &(b) + 1;
    std::cout << ptr << '\n';
    *ptr = 100;
    std::cout << x << ' ' << &x << '\n';
    std::cout << *ptr << ' ' << ptr << '\n';
}