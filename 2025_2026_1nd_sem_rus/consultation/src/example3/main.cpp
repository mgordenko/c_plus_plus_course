#include <iostream>
#include <random>
#include <vector>
void func(std::vector<int>* v) {
  *v = std::vector<int>();
  (*v).push_back(1);
  (*v).push_back(2);
}
int main() {
  std::vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  func(&a); // передали указатель! копию
  for (int i = 0; i < a.size(); i++) {
    std::cout << a[i] << std::endl;
  }
  return 0;
}