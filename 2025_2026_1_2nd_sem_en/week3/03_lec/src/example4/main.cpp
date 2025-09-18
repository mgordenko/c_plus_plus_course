#include <iostream>
int main() {
    int x = 0, y = 1;
    if (x++ && ++y) std::cout << "T\n";
    std::cout << x << ' ' << y << '\n';
    return 0;
}