#include <iostream>

int main() {
    const int size = 3;
    int c[size] = {1, 2, 3, 4};
    for (int i = 0; i < size + 1; i++) {
        std::cout << c[i] << ' ';
    }


    // for (int i = 0; i < size + 1; i++) {
    //     c[i] = i + 1;
    // }
    for (int i = 0; i < size + 1; i++) {
        std::cout << c[i] << ' ';
    }
    return 0;
}
