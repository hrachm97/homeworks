#include <iostream>
int sumDigs(int num, int sum = 0) {
    if (num / 10 == 0) {
        return num + sum;
    } else {
        return sumDigs(num / 10, sum + (num % 10));
    }
}
int main() {
    std::cout << "Enter a number and see the sum of it's digits.\n";
    int n;
    std::cin >> n;
    std::cout << sumDigs(n) << std::endl;
    return 0;
}