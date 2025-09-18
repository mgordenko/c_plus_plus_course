#include <iostream>
#include <iomanip>
int main() {
    double x = 0;
    double y = 0.1; // 0.0(0011)
    while (x <= 1.0) {
        std::cout << std::setprecision(20) << x << ' ';
        x += y;
    }
    return 0;
}
