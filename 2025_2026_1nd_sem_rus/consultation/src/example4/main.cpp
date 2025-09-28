#include <iostream>

int countIf(int* arr, int n, bool (*predicat)(int)) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (predicat(arr[i])) // которая принимает 1 число int, возвращает bool
      count++;
  }
  return count;
}
bool even(int a) {
  return a % 2 == 0;
}
bool last9(int a) {
  return a % 10 == 9;
}
bool equal1(int a) {
  return a == 1;
}
int main() {
  int* arr = new int[10];
  for (int i = 0; i < 10; i++) {
    arr[i] = rand() % 100; // плохой рандом
  }
  std::cout << countIf(arr, 10, even) << std::endl;
  std::cout << countIf(arr, 10, last9) << std::endl;
  std::cout << countIf(arr, 10, equal1) << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << arr[i] << ' '; //
  }
  delete[] arr;
  return 0;
}