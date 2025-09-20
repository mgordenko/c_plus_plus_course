#include <iostream>
#include <algorithm>

int swap(int* a, int* b) {
    std::cout << '-' << ' ' << a <<  ' ' << &a<< '\n';
    std::cout << '-' << ' ' <<  b <<  ' ' << &b<< '\n';
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main() {
    int a = 10;
    int b = 20;
    int *pa = &a;
    int *pb = &b;
    std::cout << pa <<  ' ' << &pa<< '\n';
    std::cout << pb <<  ' ' << &pb<< '\n';
    swap(pa, pb);
    std::cout << a << ' ' << b;
    return 0;
}
