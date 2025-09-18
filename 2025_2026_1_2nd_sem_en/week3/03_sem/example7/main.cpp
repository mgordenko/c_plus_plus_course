#include <iostream>
#include <cmath>
int main() {
    float sum = 4 * 1.0;
    float prev_sum = 0.0;
    int i = 3;
    int sign = -1;
    double eps = 1e-2; // 10ˆ-2, 0.01
    while (std::abs(sum - prev_sum) > eps) {
        prev_sum = sum;
        sum += 4 * (1.0 / i) * sign;
        sign = -sign;
        i += 2;
    }
    std::cout << sum;
}