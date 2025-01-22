#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 10; // 11
    cout << 10 + ++a;
    a = 10; // 11
    cout << 10 + a++;
    return 0;
}
