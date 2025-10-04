#include <iostream>


int main() {
  // int const n = 4;
  // int a[n] = {1,2,4};
  // for (int i = 0; i < n; i++) {
  //   std::cout << &a[i] << ' ' << a[i] << '\n';
  // }

  // int const n = 4;
  // int a[n] = {1,2,4};
  // for (int i = 0; i < n; i++) {
  //   //std::cout << *(a + i) << '\n';
  //   //std::cout << a[i] << '\n';
  //   std::cout << i[a] << '\n';
  // }

  // int const n = 3, m = 2;
  // int a[n][m] = {{1,2}, {3,4}, {5,6}};
  // for (int i = 0; i < n; ++i) {
  //   for (int j = 0; j < m; ++j) {
  //     std::cout << a[i][j] << ' ' << &a[i][j] << ' ';
  //   }
  //   std::cout << '\n';
  // }

  // int const n = 3, m = 2;
  // int a[n][m] = {1,2};
  // for (int i = 0; i < n; ++i) {
  //   for (int j = 0; j < m; ++j) {
  //     std::cout << a[i][j] << ' ';
  //     std::cout << i[a][j] << ' ';
  //     std::cout << *(a[i] + j) << ' ';
  //     std::cout << *(*(a + i) + j) << ' ';
  //     std::cout << *(i[a] + j) << ' ';
  //   }
  //   std::cout << '\n';
  // }

  // int const n = 3;
  // int a[n][n] = {1,2,3,4,5,6,7,8,9};
  // std::cout << **(a + 5) << '\n';

  int **arr = new int*[2];
  arr[0] = new int[2]{1, 2};
  arr[1] = new int[2]{3, 4};
  std::cout << arr[0][1] + arr[1][0];
}