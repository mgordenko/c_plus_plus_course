/*
A set of numbers is given. There are repetitions.
You need to find a number that occurs more than half
of the times.
8
1 4 1 1 1 5 2 1
1
*/

#include <iostream>

int main() { // есть ошибка
    int n;
    std::cin >> n;
    double ln = 0;
    short sign = 1;
    for (int i = 1; i <= n; ++i) {
        ln = ln + 1.0 * sign / i;
        sign *= -1;
    }
    std::cout << ln;
    return 0;
}