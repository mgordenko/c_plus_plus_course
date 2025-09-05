#include <iostream>
// 4.5
int main() {
    float sum = 0;
    float step = 1;
    long long i = 1;
    while (step > 0) {
        sum += step;
        i += 1;
        step = step / i;
    }
    std::cout << i << ' ' << sum << '\n';
    return 0;
}