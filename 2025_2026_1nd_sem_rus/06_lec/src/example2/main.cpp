#include <iostream>
#include <algorithm>

int main() {
    bool* el1 = new bool;
    bool* el2 = new bool;
    *el1 = 'a';
    *el2 = 0;
    bool* ptr1 = new bool;
    std::cout << el1 << '\n';
    std::cout << ptr1 << ' ' << (ptr1 - 32) << '\n';
    delete el1;
    delete el2;
    return 0;
}
