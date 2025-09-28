#include <iostream>
#include <random>

void swap1(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}
void swap2(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
void swap3(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}
int main() {
  int a = 10;
  int b = 20;
  std::cout << a << ' ' << b << std::endl;
  int* pa = &a; int* pb = &b;
  //swap1(a, b); // передаем копии значений
  //swap2(pa, pb); // передаем копию указателя
  swap3(a, b); // передаем ссылку
  std::cout << a << ' ' << b << std::endl;
  return 0;
}