#include <iostream>

int* Function() {
    int *array = new int[10];
    return array;
}

int main() {
    int *a = Function();
    delete [] a;
}
