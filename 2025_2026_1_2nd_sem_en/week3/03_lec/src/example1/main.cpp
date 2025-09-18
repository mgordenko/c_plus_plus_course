#include <iostream>

int main() {
    int x = 10;
    if (x = 5, x != 5) // init, condition
        std::cout << "5\n";
    else
        std::cout << "10\n";

    return 0;
}
