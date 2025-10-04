#include <iostream>
#include <functional>


template<typename T>
void sort(T* arr, int n, std::function<bool(T, T)> comp) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (comp(arr[i], arr[j]))
        std::swap(arr[i], arr[j]);
    }
  }
}
int main() {
  int n = 6;
  int arr[] = {9, 4, 20, 45, 34, 54};
  //sort<int>(arr, n, [](int a, int b) {return a < b;});
  //sort(arr, n, std::less<int>{});
  sort<int>(arr, n, std::less<int>{});
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
}
