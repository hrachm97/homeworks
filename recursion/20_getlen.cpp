#include <iostream>

int getlen(const char* str, int i = 0) {
    if (*str == 0) return i;
    return getlen(str + 1, i + 1);
}

int main() {
    std::cout << getlen("1234567");
}