#include <iostream>
#include <algorithm>

int main() {
    short x = 10;
    short* px = &x;
    short** ppx = &px;
    short*** pppx = &ppx;
    std::cout << px << ' ' << *px << '\n';
    std::cout << ppx << ' ' << *ppx <<' ' << **ppx << '\n';
    std::cout << pppx << ' ' << *pppx <<' ' << **pppx << ' ' << ***pppx << '\n';
    return 0;
}
