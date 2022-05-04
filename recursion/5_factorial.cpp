#include <iostream>
#include <string>
std::string reverse(std::string str) {
    std::string strForReverse = str;
    for (int long unsigned i = 0, j = str.size(); i < str.size(); i++) {
        j--;
        str[i] = strForReverse[j];
    }
    return str;
}
int main() {
    std::cout << "Enter a text for reverse.\n";
    std::string str;
    std::cin >> str;
    std::cout << reverse(str) << std::endl;
    return 0;
}