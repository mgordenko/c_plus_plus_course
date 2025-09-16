/*******************************************************************************
 * Find in internet how to calculate sin, cos, sqrt and power.
 * Read the number and calculate all sin, cos, sqrt and power for it.
 ******************************************************************************/
#include <iostream>
#include <cmath>
int main() {
    int n = 100;
    std::cout << n << '\n';
    std::cout << std::sqrt(n) << '\n';
    std::cout << std::sin(n) << '\n';
    std::cout << std::cos(n) << '\n';
    std::cout << std::pow(n, 2) << '\n';
    return 0;
}
