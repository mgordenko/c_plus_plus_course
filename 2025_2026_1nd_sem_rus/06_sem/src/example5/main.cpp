#include <iostream>
#include <cmath>
int main() {
    int n;
    std::cin >> n;
    int el;
    std::cin >> el;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == el) {
            for (int j = i; j < n - 1; ++j)
                arr[j] = arr[j + 1];
            ++count;
            i = i - 1;
        }
    }
    for (int i = n - count; i < n; ++i) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    return 0;
}