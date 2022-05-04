#include <iostream>
int inBetween(int num1, int num2) {
    return (num1 > num2) ? num1 - num2 - 1 : num2 - num1 -1;
}
int main() {
        std::cout << "Enter two numbers to find the count of integers in the range \n";
        int num1, num2;
        std::cin >> num1 >> num2;
        int count = inBetween(num1,num2);
        if (count >= 1) {
            std::cout << "There are " << count << " integers between the range of " << num1 << " and " << num2 << std::endl;
        } else if (count == 0) {
            std::cout << "The number " << num1 << " and " << num2 << " are sequential and there are no integers between them." <<  std::endl;
        } else {
            std::cout << "The numbers are equal" <<  std::endl;
        }
    return 0;
}