#include <iostream>

int main() {
    int x = 10;
    int* arr = new int[x];
    for (size_t i = 0; i < x; ++i) {
        arr[i] = i * i;
        std::cout << i << ' ' << &arr[i] << ' '<< arr[i] << '\n';
    }
    delete arr;
    std::cout << '\n';
    for (size_t i = 0; i < x; ++i) {
        //arr[i] = i * i;
        std::cout << i << ' ' << &arr[i] << ' '<< arr[i] << '\n';
    }
    return 0;
}
