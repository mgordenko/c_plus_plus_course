#include <iostream>
#include <algorithm>

//int F(int)	{ return 1; }
int F(double)	{ return 2; }
int F(char)	{ return 3; }

int main() {
    std::cout << F(0);
    std::cout << F(0.0);
    std::cout << F('0');
    return 0;
}
