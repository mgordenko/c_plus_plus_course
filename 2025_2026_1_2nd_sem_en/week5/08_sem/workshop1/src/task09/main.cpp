#include <iostream>


int** createMatrix(int rows, int column) {
  int** matrix = new int*[rows];
  for (int i = 0; i < rows; ++i) {
    matrix[i] = new int[column];
  }
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < column; ++j) {
      matrix[i][j] = i + j;
    }
  }
  return matrix;
}

int main() {
  int rows = 3;
  int column = 4;
  int** matrix = createMatrix(rows, column);

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < column; ++j) {
      std::cout << matrix[i][j] << ' ';
    }
    std::cout << '\n';
  }

  for (int i = 0; i < rows; ++i) {
    delete[] matrix[i];
  }
  delete[] matrix;
  return 0;
}