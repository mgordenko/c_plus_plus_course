#include <iostream>

/*Дано n - 1 число от 1 до n неповторяющиеся.
Одно число пропущено. Найти его.
4
1 2 5 4 -> 3
3
1 2 3 -> 4*/
/*
Но ведь могут быть переполнения. Придумать,
как избежать переполнения по сумме.
 */
int main() {
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int el;
        std::cin >> el;
        sum = sum ^ el ^ (i + 1);
    }
    sum = sum ^ (n + 1);
    std::cout << sum << '\n';
    return 0;
}

