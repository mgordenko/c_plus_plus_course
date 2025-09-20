#include <iostream>
#include <algorithm>

int Sum(int* arr, int n) { // arr' (copy) = adr1
    int sum = 0;
    arr = new int[5]; // arr' (copy) удаляю и делаю новый массив
    arr[0]=1;arr[1]=2;arr[2]=3;arr[3]=4; arr[4]=5;
    for (int i = 0; i < n; i++) {
        sum += arr[i]++;
    }
    std::cout << '\n'; // arr = adr1
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    return sum;
}
int main() {
    const int n = 5;
    int arr[5] = { 1, 2, 3, 4, 5 };
    std::cout << Sum(arr, n) << '\n'; // arr = adr1
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    return 0;
}
