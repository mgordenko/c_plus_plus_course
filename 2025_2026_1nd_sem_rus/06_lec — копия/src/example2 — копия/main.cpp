#include <iostream>
#include <algorithm>

int* F() {
    int x = 0;
    int* px = &x;
    return px;
}
int main() {
    int *a = F();
    std::cout << *a;
    return 0;
}
