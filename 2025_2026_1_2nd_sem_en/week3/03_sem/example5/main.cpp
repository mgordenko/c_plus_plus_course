#include <iostream>
int main() {
    int a = 10;
    int b = 20;
    a = a ^ b; // a = a ^ b; b = b
    b = a ^ b; // a = a ^ b; b = a ^ b ^ b = a
    a = a ^ b; // a = a ^ b ^ a = b;
    std::cout << a << ' ' << b;
    return 0;
}
