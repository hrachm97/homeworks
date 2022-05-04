#include <iostream>
int fibonachi(int n, int a = 0, int b = 1) {
    a += b;
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return a;
    } else {
        return fibonachi(n - 1, b, a);
    }
}
int main() {
    std::cout << "Enter the index of the number in fibonachi system.\n";
    int n;
    std::cin >> n;
    std::cout << "The " << n << "th number in fibonachi is " << fibonachi(n) << std::endl;
    return 0;
}