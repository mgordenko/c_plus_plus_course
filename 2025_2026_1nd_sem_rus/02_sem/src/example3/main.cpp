#include <iostream>

int main() {
    for (int number=2000; number <= 3000; number++) {
        int n1 = number % 10;
        int n2 = (number / 10) % 10;
        int n3 = (number / 100) % 10;
        int n4 = (number / 1000) % 10;

        if (n1 != n2 && n1 != n3 && n1 != n4 && n2 != n3 && n2 != n4 && n3 != n4) {
            std::cout << number << '\n';
        }
    }

    return 0;
}