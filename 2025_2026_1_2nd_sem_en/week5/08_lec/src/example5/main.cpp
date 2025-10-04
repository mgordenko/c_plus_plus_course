#include <iostream>

int sum(int A, int B){
  A++; B+=3;
  std::cout << "main" << '\n';
  std::cout << A << ' ' << &A << '\n';
  std::cout << B << ' ' << &B << '\n';
  return A + B;
}

int main(){
  int a = 1, b = 2;
  std::cout << "main" << '\n';
  std::cout << a << ' ' << &a << '\n';
  std::cout << b << ' ' << &b << '\n';
  int c = sum(a, b);
  std::cout << a << ' ' << b << ' ' << c << '\n';
}