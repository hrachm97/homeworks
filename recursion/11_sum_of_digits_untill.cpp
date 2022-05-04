#include <iostream>
//the sum of the integers untill the n mathemtically equals to n*(n+1)/2
int sumUntill(int n) {
    return (n > 0) ? n * (n + 1) / 2 : -n * (n - 1) / 2;
}
//recursive
int sum_untill(int n) {
    if (n > 0) return n + sum_untill(n - 1);
    else if (n < 0) return n + sum_untill(n + 1);
    else return n;
}
int main() {
    std::cout << "Enter a number to see the sum of the integers lower and equal to the number.\n";
    int n;
    std::cin >> n;
    std::cout << "The sum of the integers lower and equal to the number " << n << " is " << sum_untill(n) << std::endl;
    return 0;
}