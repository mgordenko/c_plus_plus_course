#include <iostream>

int main() {
    // unsigned int x = UINT_MAX;
    // x = x + 1;
    // std::cout << x;
    //
    // return 0;
    // unsigned char sym = 255;
    // //  1111 1111
    // //  0011 0010
    // // 10011 0001
    // std::cout << (unsigned char)(sym + 99);
    // char sym = 127;
    // //  0111 1111
    // //  0010 0000
    // //  1001 1111
    // //  1001 1110 -1
    // //  0110 0001 = -95
    // std::cout << (unsigned char)(sym + 64);

    // short a = 10;
    // // 0000...00 1010
    // // 1111...11 0110
    // // 1111...11 1110 - negative
    // // 1111...11 1101
    // // 0000...00 0010
    // short b = -10;
    // std::cout << (a | b);

    // short a = 10;
    // // 0000000 000000000
    // std::cout << (short)(a << 15);

    short a = 32000;
    // 11111111111111111 >> 7
    std::cout << (a + 32000);
}
