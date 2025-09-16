#include <iostream>


int main() {
    int x = 1;
    {
        extern int x;
        std::cout << x << '\n';
    }
    return 0;
}
int x = 0;