/*******************************************************************************
 * Read value. Check using bitwise operators the number on even|odd.
 ******************************************************************************/
#include <iostream>
int main() {
    int a;
    std::cin >> a;
    // a = 9 1001
    //       0001
    // a = 8 1000
    //       0001
    std::cout << (a & 1) << '\n';
    return 0;
}
