#include <iostream>
#include <string>
std::string reverse(std::string str, int a) {
    std::string reversed_str = str;
    if (a > str.size() / 2) {
        str[str.size() - a] = reversed_str[a - 1];
        str[a - 1] = reversed_str[str.size() - a];
        return reverse(str, a - 1);
    }
    else return str;
}
int main() {
    std::cout << "Enter a text for reverse.\n";
    std::string str;
    std::cin >> str;
    std::cout << reverse(str, str.size()) << std::endl;
    return 0;
}