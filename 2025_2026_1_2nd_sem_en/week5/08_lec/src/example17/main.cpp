#include <iostream>
#include <string>
int main() {
    /*
     * 1) create 5 variables x1 x2 x3 x4 x5
     * 2) see on adresses of 5 variables
     * 3) you should print x1-x2, x1-x2 ... Explain
     * 4) *(x1 + 1) *(x1 + 2) explain
     * 4) *(x1 - 1) *(x1 - 2) explain
     */
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    int* p1 = &x1;
    int* p2 = &x2;
    int* p3 = &x3;
    int* p4 = &x4;
    int* p5 = &x5;
    std::cout << p1 << '\n';
    std::cout << p2 << '\n';
    std::cout << p3 << '\n';
    std::cout << p4 << '\n';
    std::cout << p5 << '\n';
    std::cout << x1 - x2 << '\n';
    std::cout << *(p1 + 1) << ' ' << *(p1 + 2) << '\n';
    std::cout << *(p1 - 1) << ' ' << *(p1 - 2) << '\n';

    return 0;
  }
