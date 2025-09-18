#include <iostream>

int main() {
    const int y = 7;
    int x = 5;
    switch (x = 5, x = 0) {
        case 0:
            std::cout << 0 << '\n';
            break;
        case 5:
            std::cout << 1 << '\n';
            break;
    }
    return 0;
}
