#include <iostream>
void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int main() {
  int a = 2;
  int b = 3;
  swap(&a, &b);
  std::cout << a << ' ' << b << '\n';
}