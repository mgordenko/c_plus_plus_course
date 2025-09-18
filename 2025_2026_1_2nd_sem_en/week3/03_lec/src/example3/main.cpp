#include <iostream>
int main() {
    int x = 2, y = 3;
    if (x++ > 2) std::cout << "A\n";
    if (++y > 3) std::cout << "B\n";
    std::cout << x << ' ' << y << '\n';
}