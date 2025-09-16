#include <iostream>
#include <string>


int main() {
    int x = 0;
    std::cout <<
        ((x > 0 || x == 0) ?
        (x == 0) ? 40 : 50 :
        100);
}
