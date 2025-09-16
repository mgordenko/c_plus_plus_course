#include <iostream>
#include <cmath>

int main() {
    double nan1 = 0.0 / 0.0;
    double nan2 = sqrt(-1.0);
    std::cout << nan1 << '\n';
    std::cout << nan2 << '\n';
    return 0;
}
