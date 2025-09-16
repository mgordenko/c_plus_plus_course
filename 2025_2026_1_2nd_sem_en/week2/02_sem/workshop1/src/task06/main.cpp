/*******************************************************************************
 * Read the number with 4 digits. Calculate the sum of digits.
 *  2340  9
 ******************************************************************************/

#include <iostream>

int main() {
    int a;
    std::cin >> a;
    int n1 = a % 10;
    int n2 = (a / 10) % 10;
    int n3 = (a / 100) % 10;
    int n4 = (a / 1000);
    std::cout << n1 + n2 + n3  + n4 << '\n';
    return 0;
}
