#include <iostream>

int main() {
    int x = 5; //5
    int y = --x + ++x; // 4 + 5
    std::cout << x << ' ' << y << '\n';
    return 0;
}
