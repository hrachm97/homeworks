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
bool isCapable(int num) {
    bool is_capable = 0;
    for (int i = 0; i <= num / 2; i++) {
        if(isPrime(i) && isPrime(num-i)) {
            is_capable = 1;
            break;
        }
    }
    return is_capable;
}
int main() {
        std::cout << "Enter a number to see if it is capable of being represented as the sum of two prime numbers.\n";
        int num;
        std::cin >> num;
        if (isCapable(num)) {
            std::cout << "The number is capable of being represented as the sum of two prime numbers." << std::endl;
        } else {
            std::cout << "The number is not capable of being represented as the sum of two prime numbers." << std::endl;
        }
    return 0;
}