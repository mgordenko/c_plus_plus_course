#include <iostream>

int main() {
    const int n = 5;
    short arr[n] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << ' ';
    std::cout << '\n';
    for (int i = 0; i < n; i++)
        std::cout << i[arr] << ' ';
    std::cout << '\n';
    return 0;
}

