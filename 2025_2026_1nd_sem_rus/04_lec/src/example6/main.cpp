#include <iostream>
#include <string>

int main() {
    int const n = 5;
    int a[6] = { 0, 9, 0, 7, -7, 8 };
    for (int i = 0; i < 6; i++) {
        if (a[i]) {
            std::cout << a[i] << "\n";
        }
    }
}
