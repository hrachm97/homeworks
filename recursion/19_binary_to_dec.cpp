#include <iostream>
#include <cmath>

long long to_number (std::string str) {
    int n = str.size();
    long long tmp{};
    while(n > 0) {
        tmp += pow(str[str.size() - n] - 48 , n - 1);
        n--;
    }
    return tmp;
}

int main() {
    std::cout << to_number("148");
}