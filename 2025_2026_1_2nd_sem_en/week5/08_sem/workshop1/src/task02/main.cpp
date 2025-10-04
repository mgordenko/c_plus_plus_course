#include <iostream>

void incremenAll(int* p, int n) {
  for (int i = 0; i < n; ++i)
    p[i]++;
}
void printArray(const int* p, int n) {
  for (int i = 0; i < n; ++i) {
    std::cout << p[i] << ' ';
  }
}
int main() {
  int size = 5;
  int array[] = {1, 2, 3, 4, 5};
  printArray(array, size);
  std::cout << '\n';
  incremenAll(array, size);
  printArray(array, size);
  return 0;
}

