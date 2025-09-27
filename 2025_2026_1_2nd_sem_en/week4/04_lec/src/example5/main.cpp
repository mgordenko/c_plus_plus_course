#include <iostream>
int main() {
    int x = 2;
    std::cout << x << '\n';
    const int* p_x = &x;
    x = 10;
    //*p_x = 5;
    std::cout << p_x << '\n';
    std::cout << x << '\n';
}