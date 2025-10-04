#include <iostream>
#include <cstdint>
#include <random>
template <typename T>
T* createArray(int n) {
  T* arr = new T[n];
  for (int i = 0; i < n; ++i) {
    arr[i] = (T)((rand() % 10000) / 100.0);
  }
  return arr;
}

int main() {
  int n = 10;
  char* arr = createArray<char>(n);
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << ' ';
  }
  delete[] arr;
}

