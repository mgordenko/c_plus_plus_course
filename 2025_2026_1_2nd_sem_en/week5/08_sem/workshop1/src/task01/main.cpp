#include <iostream>

void modify(int arr[]) {
  arr = new int[3];
  arr[0] = 100;
  arr[1] = 200;
}

int main() {
  int nums[] = {1, 2, 3};
  modify(nums);
  std::cout << nums[0] << " " << nums[1];
  return 0;
}
