#include <iostream>
#include <cmath>
int main() {
    int n;
    std::cin >> n;
    int ind;
    std::cin >> ind;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    for (int i = ind; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = 0;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    return 0;
}