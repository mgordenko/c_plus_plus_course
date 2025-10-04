#include <iostream>
#include <random>

int lastDigit(int a) {
  return a % 10;
}

int squared(int a) {
  return a * a;
}

void applyToArray(int* arr, int n, int (*func)(int)) {
  for(int i = 0; i < n; i++)
    arr[i] = func(arr[i]);
}

int main() {
  int aSize = 5;
  int *a = new int[aSize];

  for(int i = 0; i < aSize; i++)
    a[i] = rand() % 100; // лучше не использовать этот рандом
  for(int i = 0; i < aSize; i++)
    std::cout << a[i] << ' ';
  std::cout << '\n';
  applyToArray(a, aSize, squared);
  for(int i = 0; i < aSize; i++)
    std::cout << a[i] << ' ';

  delete[] a;
  return 0;
}