#include <iostream>
#include <algorithm>

int main() {
    auto f = [](int x) { return x * x;};
    std::cout << (f(9));
    return 0;
}
