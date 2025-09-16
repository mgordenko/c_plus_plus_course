#include <iostream>
/*
Дается массив. Читаем его с клавиатуры.
В этом массиве все числа кроме одного встречаются дважды
Найти число которое встречается 1 раз
5 1 2 3 10 10 2 3 1
5
aˆ0 = a*/
int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];
    int res = 0;
    for (int i = 0; i < n; ++i)
        res ^= arr[i];
    std::cout << res;
    return 0;
}