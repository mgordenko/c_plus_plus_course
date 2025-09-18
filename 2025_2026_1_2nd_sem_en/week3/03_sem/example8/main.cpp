#include <iostream>
#include <cmath>
int main() {
    float prev_sum = -1;
    float sum = 0.0;
    int i = 1;
    int f = 1;
    float x = 3;
    float powered_x = 1;
    double eps = 1e-3; // 10ˆ-2, 0.01
    while (std::abs(sum - prev_sum) > eps) {
        prev_sum = sum;
        sum += powered_x / f;
        powered_x *= x;
        i += 1;
        f *= i;
    }
    std::cout << sum;
}