#include <iostream>
int main() {
    int x = 2;
    int* p_x = &x;
    const int* c_p_x = &x;
    std::cout << x << ' ' << p_x << '\n';
}