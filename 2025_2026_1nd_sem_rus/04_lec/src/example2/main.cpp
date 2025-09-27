#include <iostream>
#include <algorithm>

int main() {
    const int N = 8;
    int a[N];
    for (int i = 0; i < N; ++i)
        a[i] = i*i;
    // размер (работает только пока a — не указатель)
    std::cout << sizeof(a) << '\n'; // n*type
    std::fill(a, a +N, 42);
    for (const int x: a)
        std::cout <<x << ' ';
    std::cout<< '\n';
    return 0;
}
