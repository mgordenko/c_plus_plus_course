/*******************************************************************************
 * Read two a and b. Swap values without additional variables.
 ******************************************************************************/
#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << ' ' << b << '\n';
    a = a + b; // a = a + b; b = b
    std::cout << a << '\n';
    b = a - b; // a = a + b; b = a + b - b = a
    a = a - b; // a = a + b - a = b; b = a
    std::cout << a << ' ' << b << '\n';
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    return 0;
}
