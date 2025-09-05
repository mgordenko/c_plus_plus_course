#include <iostream>
#include <cmath>
int main() {
    int n;
    std::cin >> n;
    int n_copy = n;
    int sum = 0, cnt = 0;
    while (n_copy) {
        sum += n_copy % 10;
        ++cnt;
        n_copy /= 10;
    }
    for (int i = 1; i <= 9; ++i) {
        for (int j = 0; j <= 9; ++j) {
            int x = i * (int)std::pow(10, cnt + 1) + n * 10 + j;
            if (x % 7 == 0 && x % 8 == 0 && x % 9 == 0) {
                std::cout << i << ' ' << j << '\n';
            }
        }
    }
    return 0;
}