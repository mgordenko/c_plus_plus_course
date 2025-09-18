#include <iostream>
#include <algorithm>

int main() {
    short* el1 = new short;
    short* el2 = new short;
    *el1 = 'a';
    *el2 = 1;
    short* ptr1 = new short;
    std::cout << el1 << '\n';
    std::cout << (el1 + 1) << '\n';
    *(el1 + 1) = 1;
    std::cout << (el1 + 2) << '\n';
    *(el1 + 2) = 1;
    std::cout << (el1 + 3) << '\n';
    *(el1 + 1) = 1;
    std::cout << (el1 + 4) << '\n';
    std::cout << ptr1 << ' ' << (ptr1 - 16) << '\n';
    int* ptr2 = (int*)(ptr1 - 16);
    std::cout << ptr2 << ' ' << *ptr2 << '\n';
    delete el1;
    delete el2;
    return 0;
}
