#include <iostream>

int main() {
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << (y > 0) * x / y - (y == 0) << '\n'; return 0;
}
