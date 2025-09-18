#include <iostream>
#include <string>

// 6 2
// 1 2 3 4 5 6
// 5 6 1 2 3 4

int main() {
    int n;
    std::cin >> n;
    int k;
    std::cin >> k;
    int arr[n], res[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        int ind = (i + k) % n;
        res[ind] = arr[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cout << res[i] << ' ';
    }
}
