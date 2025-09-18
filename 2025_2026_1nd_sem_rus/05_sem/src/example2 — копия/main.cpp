#include <iostream>
#include <random>

int main() {
    int n, m;
    std::cin >> n >> m;
    int32_t arr[n][m];
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            arr[i][j] = rand() % 100;
        }
    }
    for (size_t i = 0; i < n; ++i, std::cout << '\n') {
        for (size_t j = 0; j < m; ++j) {
            std::cout << arr[i][j] << ' ';
        }
    }
    return 0;
}