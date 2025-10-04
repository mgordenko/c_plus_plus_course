#include <iostream>

int* createAndFillArray(int size, int n) {
  int *a = new int[size];
  for(int i = 0; i < size; ++i) {
    a[i] = n + i;
  }
  return a;
}

int main() {
  int size, n;
  std::cin >> size >> n;
  if (size < 1) {
    return 1;
  }
  int *a = createAndFillArray(size, n);
  for(int i = 0; i < size; ++i)
    std::cout << a[i] << ' ';
  std::cout << '\n';
  delete[] a;
  return 0;
}