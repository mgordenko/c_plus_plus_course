#include <iostream>

int sum(int* a, int n){
  int c = 0;
  a = new int[n];
  for (int i = 0; i < n; ++i) {
    c += a[i]++;
  }
  return c;
}

int main(){
  int* a = new int[4];
  a[0] = 1; a[1] = 2; a[2] = 3; a[3] = 4;
  int c = sum(a, 4);
  for (int i = 0; i < 4; ++i) {
    std::cout << a[i] << ' ';
  }
  std::cout << '\n';
  std::cout << c << '\n';
}