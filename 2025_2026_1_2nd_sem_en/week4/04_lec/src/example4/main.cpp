#include <iostream>
int main() {
    int x = 0;
    std::cout << x << '\n';
    int* p_x = &x;
    std::cout << p_x << '\n';
    int** pp_x = &p_x;
    std::cout << pp_x << '\n';
    return 0;
}