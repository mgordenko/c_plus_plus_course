#include <iostream>
#include <algorithm>
void f1(int* a) {
  a = new int[5];
  for (int i = 0; i< 5; ++i) {
    a[i] = 9;
  }
}
void f2(int* &a) {
  a = new int[5];
  for (int i = 0; i< 5; ++i) {
    a[i] = 9;
  }
}
int main() {
    int * a = new int[5];
    std::fill_n(a, 5, 11);
    f1(a);
    for (int i = 0; i < 5; ++i) {
      std::cout << a[i] << std::endl;
    }
    return 0;
}
