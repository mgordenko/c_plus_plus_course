/*******************************************************************************
 * Find in internet what is the setpresicion? Try different examples.
 ******************************************************************************/
// setpresicion fixed oct hex bin
#include <iomanip>
#include <iostream>
#include <valarray>

int main() {
    double a = 1.123456789;
    std::cout << a << '\n';
    std::cout << std::setprecision(4) << a << '\n';
    a = 1.1;
    std::cout << a << '\n';
    std::cout << std::fixed << std::setprecision(4) << a << '\n';
    a = 0.2;
    double b = 0.1;
    std::cout << a + b << '\n';
    std::cout << std::fixed << std::setprecision(20) << a + b << '\n';
    int c = 13;
    std::cout << std::hex << c << '\n';
    std::cout << std::oct << c << '\n';
    std::cout << std::dec << c << '\n';
    return 0;
}
