#include <iostream>

void findMinMax(int* arr, int size, int* min, int* max) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] < *min)
      *min = arr[i];
    if (arr[i] > *max)
      *max = arr[i];
  }
}

int main() {
  int size = 6;
  int* numbers = new int[size]{3, 7, 2, 9, 1, 5};
  int min = INT32_MAX, max = INT32_MIN;
  findMinMax(numbers, size, &min, &max);

  std::cout << "min: " << min << ", max: " << max;
  delete[] numbers;
  return 0;
}