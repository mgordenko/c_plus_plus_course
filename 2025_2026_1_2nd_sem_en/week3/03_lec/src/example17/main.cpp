#include <iostream>
#include <string>
int main() {
    std::string s = "Hello World";
    std::cout << s << '\n';
    std::cout << s[0] << '\n';
    std::cout << s[1] << '\n';
    for (int i = 0; i < s.size(); ++i) {
        std::cout << s[i]  << ' ' << int(s[i]) << '\n';
    }
    return 0;
}
