/*******************************************************************************
 * For integer a and b numbers try to use different bit operators. Discuss the output.
 ******************************************************************************/
#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << ' ' << b  << ' ' << (a | b) << '\n';
    std::cout << a << ' ' << b  << ' ' << (a & b) << '\n';
    std::cout << a << ' ' << b  << ' ' << (a ^ b) << '\n';
    std::cout << a << ' ' << (a >> 1) << '\n';
    std::cout << a << ' ' << (a << 1) << '\n';
    std::cout << a << ' ' << (~a) << '\n';
    return 0;
}
