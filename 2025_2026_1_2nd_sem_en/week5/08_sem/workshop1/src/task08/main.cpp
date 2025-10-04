#include <iostream>

void printMatrix(int a, int m, int n) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j)
      std::cout << a[i][j] << '\t';
    std::cout << '\n';
  }
}

int createMatrix(int m, int n) {
  int **a = new int*[m];
  for (int i = 0; i < m; ++i) {
    a[i] = new int[n];
    for (int j = 0; j < n; ++j)
      std::cin >> a[i][j];
  }
  return a;
}

int main() {
  int m, n;
  std::cin >> m >> n;
  if (m < 1 || n < 1) {
    return 1;
  }

  int **a = createMatrix(m, n);
  printMatrix(a, m, n);

  for(int i = 0; i < n; ++i)
    delete[] a[i];
  delete[] a;

  return 0;
}