// #include <iostream>
//
// int main() {
//   int a = 10;
//   int b = 20;
//   int c = 30;
//   int d = 40;
//   std::cout << a << ' ' << &a << '\n';
//   std::cout << b << ' ' << &b << '\n';
//   std::cout << c << ' ' << &c << '\n';
//   std::cout << d << ' ' << &d << '\n';
//   int* pa = &a, *pb = &b, *pc = &c, *pd = &d;
//   std::cout << *pa << ' ' << *pb << '\n';
//   std::cout << *pb << ' ' << *pc << '\n';
//   std::cout << pd - pc << '\n';
//   std::cout << pd - pb << '\n';
//   std::cout << pd - pa << '\n';
//   return 0;
// }
#include <iostream>

int main() {
  int n = 1684234849; // 97 + 98 * 2ˆ8 + 99 * 2ˆ16 + 100 * 2ˆ100
  int* px = &n;
  char* pc = (char*)px;
  std::cout << px << std::endl;
  std::cout << *pc << std::endl;
  std::cout << *(pc + 1) << std::endl;
  std::cout << *(pc + 2) << std::endl;
  std::cout << *(pc + 3) << std::endl;
}
