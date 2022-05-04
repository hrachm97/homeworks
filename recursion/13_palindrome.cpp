#include <iostream>

bool isPalindrome (std::string str, int i = 0) {
    if (i < str.size() / 2 && str[i] == str[str.size() - 1 - i]) return isPalindrome (str, i + 1);
    if (i == str.size() / 2) return true;
    return false;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << isPalindrome(str);
}