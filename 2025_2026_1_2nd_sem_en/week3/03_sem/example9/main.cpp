#include <iostream>
#include <cmath>
int main() {
    float prev_sum = -1;
    float x = 3;
    float sum = 0;
    int i = 1;
    int f = 1;
    int sign = 1;
    float powered_x = x;
    double eps = 1e-3; // 10ˆ-2, 0.01
    while (std::abs(sum - prev_sum) > eps) {
        prev_sum = sum;
        sum += sign * powered_x / f;
        sign = -sign;
        powered_x *= x * x;
        i += 1; f *= i;
        i += 1; f *= i;
    }
    std::cout << sum;
}