#include <iostream>
#include <cstdint>

int main() {
    int32_t a[3] = {1, 2, 3};
    int32_t b[3] = {4, 5, 6};
    int sum = 0;
    for (size_t i = 0; i < n; ++i) {
        sum += (*(a + i) * *(b + i));
    }
    std::cout << sum << '\n';
}

