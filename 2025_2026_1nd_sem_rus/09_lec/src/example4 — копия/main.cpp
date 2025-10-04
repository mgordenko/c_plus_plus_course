#include <iostream>
#include <cmath>

template<typename T>
T calculateAverage(const T* array, size_t size) {
  T sum = 0;
  for (size_t i = 0; i < size; ++i) {
    sum += array[i];
  }
  return sum / size;
}
int main() {
  double arr[] = {1.0, 2.0, 3.0, 4.0};
  int arr2[] = {1, 2, 3, 4};
  std::cout << calculateAverage(arr, 4);
  std::cout << calculateAverage(arr2, 4);
  return 0;
}