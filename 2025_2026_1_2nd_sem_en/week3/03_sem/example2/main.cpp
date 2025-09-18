#include <iostream>
int main() {
    double sum = 0.0;
    int i = 1;
    double number = 1.0;
    while (number > 0) {
        number = 1.0 / (i * i);
        sum += 1.0 / (i * i);
        i++;
        std::cout << number << '\n';
    }
    std::cout << sum << '\n';
    return 0;
}
