#include <iostream>

int main() {
    double x;
    double y;
    std::cin >> x >> y;
    std::cout << ((y > 0) * x) / ((y == 0) + y) - (y == 0) << '\n';
    return 0;
}
