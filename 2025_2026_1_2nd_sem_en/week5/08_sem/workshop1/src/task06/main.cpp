#include <iostream>

int* concatArrays(int *a, int aSize, int *b, int bSize) {
  if (aSize < 1 || bSize < 1) {
    return nullptr;
  }

  int *c = new int[aSize+bSize];
  for (int i = 0; i < aSize; ++i)
    c[i] = a[i];

  for (int i = 0; i < bSize; ++i)
    c[i + aSize] = b[i];
  return c;
}

int main() {
  int aSize, bSize;
  std::cin >> aSize >> bSize;
  if (aSize < 1  || bSize < 1) {
    return 1;
  }
  int *a = new int[aSize];
  int *b = new int[bSize];

  for(int i = 0; i < aSize; i++)
    std::cin >> a[i];

  for(int i = 0; i < bSize; i++)
    std::cin >> b[i];

  int *c = concatArrays(a, aSize, b, bSize);
  if (c != nullptr) {
    for(int i = 0; i < aSize + bSize; ++i)
      std::cout << c[i] << ' ';
    std::cout << '\n';
    delete[] c;
  }

  delete[] a;
  delete[] b;
  return 0;
}