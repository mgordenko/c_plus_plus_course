#include <iostream>
#include <vector>
#include <algorithm>
int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::sort(v.begin(), v.end(),
    [](int el1, int el2) -> bool {return el1 > el2;});
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << ' ';
  }
  return 0;
}