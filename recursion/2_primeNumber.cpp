#include <iostream>
bool isPrime(int num) {
    bool is_prime = 1;
    if (num <= 1){
        is_prime = 0;
    } else {
        for (int i = 2; i < num; ++i) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    return is_prime;
}
int main() {
        std::cout << "Enter a number to see if it is prime number or not.\n";
        int num;
        std::cin >> num;
        if (isPrime(num)) {
            std::cout << "The number is prime." << std::endl;
        } else {
            std::cout << "The number is not prime." << std::endl;
        }
    return 0;
}