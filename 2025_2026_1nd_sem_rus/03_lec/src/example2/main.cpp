#include <iostream>

int main() {
    double x;
    double y;
    std::cin >> x >> y;
    std::cout << x / y << '\n';
    std::cout << (y > 0) * x / y - (y == 0) << '\n'; return 0;
}