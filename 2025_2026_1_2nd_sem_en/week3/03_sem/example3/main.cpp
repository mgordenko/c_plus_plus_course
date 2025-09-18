#include <iostream>
// Find the smallest positive double
// z such that dividing by 2 gives 0.0
int main() {
    double num = 1.0;
    while (num > 0) {
        std::cout << num << '\n';
        num /= 2;
    }
    std::cout << num / 2;
}