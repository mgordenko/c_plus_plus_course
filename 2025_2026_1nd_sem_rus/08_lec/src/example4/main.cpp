#include <iostream>
// int F() {
//     static int x;
//     return x++;
// }

void F(int x) {
    std::cout << ++x;
    {
        static int y;  int z = x;
        std::cout << ++y << ++z;
    }
}
int main() {
    F(1);
    F(2);
    F(3);
    return 0;
}
