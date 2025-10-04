#include <iostream>
void func(int arr[]) {
  std::cout << sizeof(arr);
}
int main() {
  int array[10];
  std::cout << sizeof(array) << " ";
  func(array);
  return 0;
}
