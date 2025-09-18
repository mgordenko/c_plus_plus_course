#include <iostream>
#include <random>

int main() {
    int n, m;
    std::cin >> n;
    m = n;
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> dist(0, 100);

    int32_t arr[n][m];
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            arr[i][j] = dist(gen);
        }
    }
    for (size_t i = 0; i < n; ++i, std::cout << '\n') {
        for (size_t j = 0; j < m; ++j) {
            std::cout << arr[i][j] << ' ';
        }
    }

    for (size_t i = 0; i < n; ++i, std::cout << '\n') {
        for (size_t j = i + 1; j < m; ++j) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (size_t i = 0; i < n; ++i, std::cout << '\n') {
        for (size_t j = 0; j < m; ++j) {
            std::cout << arr[i][j] << ' ';
        }
    }



    return 0;
}