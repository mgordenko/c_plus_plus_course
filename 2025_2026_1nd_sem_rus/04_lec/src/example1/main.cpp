#include <iostream>

int main() {
    // const int N = 4, M = 2;
    // short a[N][M];
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < M; j++) {
    //         std::cout << &a[i][j] << ' ';
    //     }
    //     std::cout << '\n';
    // }
    // std::cout << sizeof(a) << '\n'; // n*type

    // const int SIZE = 5;
    // long long a[SIZE];
    // for (int i = 0; i < SIZE; i++) {
    //     std::cout << a[i] << '\n';
    // }
    const int N = 5;            // константное выражение
    int a[N];                  // неинициализировано (мусорные значения)
    int c[N] = {1, 2};         // 1,2,0,0,0
    // int k = 3; int d[k];    // так нельзя: размер не константа времени компиляции
    std::cout << "OK\n";
    return 0;
}
