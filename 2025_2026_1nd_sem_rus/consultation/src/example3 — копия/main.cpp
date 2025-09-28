#include <iostream>
#include <random>
#include <vector>
void func(const std::vector<int>& v) {
  // менять v нельзя
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << std::endl;
  }
}
int main() {
  std::vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  func(a);
  for (int i = 0; i < a.size(); i++) {
    std::cout << a[i] << std::endl;
  }
  return 0;
}