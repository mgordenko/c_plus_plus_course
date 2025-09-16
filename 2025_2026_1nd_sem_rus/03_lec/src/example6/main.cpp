#include <iostream>
#include <string>


int main() {
    int x = 0;
    switch (x) {
        case 0: { std::cout << "Zero\n"; }
        case 1: std::cout<<"One\n"; break;
        default: std::cout << "Default\n";
    }
}
