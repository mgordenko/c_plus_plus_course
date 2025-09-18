#include <iostream>
// Approximate the sum of the harmonic series
int main() {
    float sum = 1.0;
    float prev_sum = 0.0;
    int i = 2;
    double eps = 1e-2; // 10ˆ-2, 0.01
    while (sum - prev_sum > eps) {
        prev_sum = sum;
        sum += (1.0 / i);
        // std::cout << sum << ' ' << prev_sum << std::endl;
        i++;
    }
    std::cout << sum;
}