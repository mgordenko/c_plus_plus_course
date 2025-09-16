#include <iostream>

int main() {
    const int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << ' ';
    return 0;
}

