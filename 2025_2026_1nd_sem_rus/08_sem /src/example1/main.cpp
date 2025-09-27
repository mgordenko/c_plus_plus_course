#include <iostream>

int main() {
    int32_t n = 5;
    int32_t **arr = new int32_t*[n];
    for (size_t i = 1; i < n; ++i) {
        arr[i] = new int32_t[i - 1];
        for (size_t j = 0; j < i; ++j) {
            arr[i][j] = i * i + 10;
        }
    }
    for (size_t i = 1; i < n; ++i) {
        for (size_t j = 0; j < i; ++j) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << arr[i][0] << '\n';
    }
    return 0;
}

