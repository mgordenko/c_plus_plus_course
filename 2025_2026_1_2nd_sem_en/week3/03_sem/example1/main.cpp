#include <iostream>
int main() {
    float x = 5;
    while (x) {
        std::cout << x << ' ';
        x /= 2;
    }
    return 0;
}
