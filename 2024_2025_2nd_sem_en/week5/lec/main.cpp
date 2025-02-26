// #include <iostream>

// int main1() {
//   int n = 5;
//   int *arr = new int[n];
//   std::cout << arr << '\n';
//   for (int i = 0; i < n; ++i) {
//     *(arr + i) = i + 1;
//     // i[arr] = i + 1;
//     // arr[i]
//   }
//   for (int i = 0; i < n; ++i) {
//     std::cout << arr[i] << ' ' << &arr[i] << '\n';
//   }

//   delete[] arr;
// }

// void print(int *arr, int n) {
//   for (int i = 0; i < n; ++i) {
//     std::cout << arr[i] << ' ';
//   }
//   std::cout << '\n';
// }
// int main2() {
//   int n = 5;
//   int *arr = new int[n];
//   std::cout << arr << ' ' << &arr << '\n';
//   std::cout << n << ' ' << &n << '\n';
//   for (int i = 0; i < n; ++i) {
//     *(arr + i) = i + 1;
//   }
//   print(arr, n);
// }

// void changer(int *arr, int n) {
//   arr = new int[n];
//   for (int i = 0; i < n; ++i) {
//     arr[i] = i * 10;
//   }
// }

// void modify(int *arr, int n) {
//   for (int i = 0; i < n; ++i) {
//     arr[i] = i * 10;
//   }
// }

// int main3() {
//   int n = 5;
//   int *arr = new int[n];
//   for (int i = 0; i < n; ++i) {
//     *(arr + i) = i + 1;
//   }
//   print(arr, n);
//   modify(arr, n);
//   print(arr, n);
//   delete[] arr;
// }

// int *createArray(int n) {
//   int *arr = new int[n];
//   for (int i = 0; i < n; ++i) {
//     arr[i] = i * i;
//   }
//   return arr;
// }

// int main4() {
//   int n = 5;
//   int *arr = createArray(n);
//   print(arr, n);
//   delete[] arr;
// }

// void changer2(int *arr, int n) {
//   int *b = &(*arr);
//   b = new int[n];
//   for (int i = 0; i < n; ++i) {
//     arr[i] = i * 10;
//   }
// }
// int main6() {
//   int n = 5;
//   int *arr = new int[n];
//   for (int i = 0; i < n; ++i) {
//     *(arr + i) = i + 1;
//   }
//   print(arr, n);
//   changer2(arr, n);
//   print(arr, n);
//   delete[] arr;
// }

// int main7() {
//   int n = 5;
//   int *arr = new int[n];
//   int *arr2 = new int[n];
//   for (int i = 0; i < 2 * n; ++i) {
//     *(arr + i) = i + 1;
//   }
//   for (int i = 0; i < n; ++i) {
//     *(arr2 + i) = i * i;
//   }
//   print(arr, 2 * n);
//   delete[] arr;
// }

// void func(int *arr, int n) {
//   int *b = new int[n];
//   b = arr;
//   for (int i = 0; i < n; ++i) {
//     *(&(*b) + i) = i * 10;
//   }
// }

// int main9() {
//   int n = 5;
//   int *arr = new int[n];
//   for (int i = 0; i < n; ++i) {
//     *(arr + i) = i + 1;
//   }
//   print(arr, n);
//   delete[] arr;
// }

// int main10() {
//   int rows = 4;
//   int col = 3;
//   int **matrix = new int *[rows];
//   for (int i = 0; i < rows; ++i) {
//     matrix[i] = new int[col];
//   }
//   for (int i = 0; i < rows; ++i) {
//     for (int j = 0; j < col; ++j) {
//       matrix[i][j] = i + j;
//     }
//   }
//   for (int i = 0; i < rows; ++i) {
//     for (int j = 0; j < col; ++j) {
//       std::cout << matrix[i][j] << ' ';
//     }
//     std::cout << '\n';
//   }
//   for (int i = 0; i < rows; ++i) {
//     delete[] matrix[i];
//   }
//   delete[] matrix;
// }

// // 1
// // 2 3
// // 3 4 5
// // 4 5 6 7

// int main11() {
//   int n = 5;
//   int **arr = new int *[n];

//   for (int i = 0; i < n; ++i) {
//     arr[i] = new int[i + 1];
//   }

//   for (int i = 0; i < n; ++i) {
//     for (int j = 0; j < i + 1; ++j) {
//       arr[i][j] = i + j;
//     }
//   }

//   for (int i = 0; i < n; ++i, std::cout << '\n') {
//     for (int j = 0; j < i + 1; ++j) {
//       std::cout << arr[i][j] << ' ';
//     }
//   }

//   for (int i = 0; i < n; ++i) {
//     delete[] arr[i];
//   }

//   delete[] arr;
// }

// bool even(int a) {
//   return a % 2 == 0;
// }

// bool comp(int a) {
//   return a % 10 == 3;
// }

// int counter(int *a, int n, bool (*func)(int)) {
//   int count = 0;
//   for (int i = 0; i < n; ++i) {
//     if (func(a[i])) {
//       count++;
//     }
//   }
//   return count;
// }

// int main() {
//   int n = 15;
//   int *arr = new int[n];
//   for (int i = 0; i < n; ++i) {
//     *(arr + i) = i + 1;
//   }
//   print(arr, n);
//   std::cout << counter(arr, n, comp) << '\n';
//   delete[] arr;
// }
