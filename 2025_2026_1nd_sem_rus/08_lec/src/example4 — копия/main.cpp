#include <iostream>
#include <algorithm>
bool greater(int a, int b) {
  return a > b;
}
bool less(int a, int b) {
  return a <= b;
}
int sort(int* arr, int n, bool (*comp)(int, int)) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (comp(arr[j], arr[i])) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}
int main() {
  const int n = 5;
  int arr[5] = { 3, 2, 1, 4, 5 };
  sort(arr, n, [](int a, int b) { return a > b;});
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
  return 0;
}
