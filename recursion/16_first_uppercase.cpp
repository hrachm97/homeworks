#include <iostream>

char firstUpperCase(std::string str, int i = 0) {
    if (i == str.size()) return 0;
    if(str[i] > 64 && str[i] < 91) return str[i];
    return firstUpperCase(str, i + 1);
}
int main() {
    std::cout << firstUpperCase("asjdft");
}