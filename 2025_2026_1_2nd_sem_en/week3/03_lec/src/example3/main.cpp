#include <iostream>
int main() {
    unsigned int x = 5; // 01012
    unsigned int mask = 1 << 2; // 01002
    std::cout << (x | mask) << '\n';
}