#include <iostream>

int main() {
    int n = 10;
    int a[n];    // в стандарте C++ так нельзя!!! только в gcc/clang как расширение
    const int N = 10;
    int b[N];
    return 0;
}
