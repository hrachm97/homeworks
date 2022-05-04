#include <iostream>
#include <string>
std::string baseConverter(unsigned int n, int base, std::string num_repr = "00000000000000000000000000000000", int i = 0) {
    int size = sizeof(n)*8;
    if (i < size) {
        switch (n % base)
        {
            case 0: num_repr[size - 1 - i] = '0';
                break;
            case 1: num_repr[size - 1 - i] = '1';
                break;
            case 2: num_repr[size - 1 - i] = '2';
                break;
            case 3: num_repr[size - 1 - i] = '3';
                break;
            case 4: num_repr[size - 1 - i] = '4';
                break;
            case 5: num_repr[size - 1 - i] = '5';
                break;
            case 6: num_repr[size - 1 - i] = '6';
                break;
            case 7: num_repr[size - 1 - i] = '7';
                break;
            case 8: num_repr[size - 1 - i] = '8';
                break;
            case 9: num_repr[size - 1 - i] = '9';
                break;
            case 10: num_repr[size - 1 - i] = 'a';
                break;
            case 11: num_repr[size - 1 - i] = 'b';
                break;
            case 12: num_repr[size - 1 - i] = 'c';
                break;
            case 13: num_repr[size - 1 - i] = 'd';
                break;
            case 14: num_repr[size - 1 - i] = 'e';
                break;
            case 15: num_repr[size - 1 - i] = 'f';
                break;
            default:
                break;
        }
        num_repr = baseConverter(n / base, base, num_repr, i + 1);
    }
    return num_repr;
}
std::string realToBin(float r) {
    unsigned int* ptr = (unsigned int*)&r;
    return baseConverter(*ptr,2);
}
int main() {
    std::cout << "Enter a real number to see it's binary representation.\n";
    float r;
    std::cin >> r;
    std::cout << "Your real number is \n" << r << "\nThe binary representation of the number is" << std::endl;
    std::cout << "seeeeeeeefffffffffffffffffffffff" << std::endl;
    std::cout << realToBin(r);
    return 0;
}