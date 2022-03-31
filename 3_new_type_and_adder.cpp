#include <iostream>

//Creating a new type Hex which contains 4 bits so can hold numbers from 0 to 15
struct Hex {
    bool n[4] = {};
};

//in order to create the virtual implementation of the full adder we must have a type
//for outputing 2 bytes: the sum and the carry out
struct Output {
    bool sum = 0;
    bool carry_out = 0;
};

//this is the virtual implementation of full adder which has 3 inputs: a, b, and carry in; and 2 outputs which is the type we created beforehand
Output full_adder(bool a, bool b, bool carry_in) {
    Output num_out;
    num_out.sum = (a ^ b) ^ carry_in;
    num_out.carry_out = (a & b) | ((a ^ b) & carry_in);
    return num_out;
}
//this is a virtual implementation of 4 bit adder
Hex adder(Hex num1, Hex num2) {
    Hex numSum;
    bool carry_in = 0;
    for (int i = 0; i < 4; ++i) {
        Output num_out = full_adder(num1.n[3 - i], num2.n[3 - i], carry_in);
        numSum.n[3 - i] = num_out.sum;
        carry_in = num_out.carry_out;
    }
    return numSum;
}
Hex input_hex() {
    int n;
    std::cin >> n;
    Hex sample;
    short base = 2;
    for (int i = 0; i < 4; ++i) {
        switch (n % base)
        {
        case 0: sample.n[3 - i] = 0;
            break;
        case 1: sample.n[3 - i] = 1;
            break;
        default:
            break;
        }
    n /= base;
    }
    return sample;
}
int pow(int num, int power) {
    if (power == 0) return 1;
    return num * pow(num, power - 1);
}
void print_hex(Hex num) {
    int dec = 0;
    for (int i = 0; i < 4; ++i)
        dec += num.n[i] * pow(2, 3 - i);
    std::cout << dec;
    std::cout << std::endl;
}

int main() {
    Hex num1 = input_hex();
    Hex num2 = input_hex();
    Hex sum = adder(num1, num2);
    print_hex(sum);
    return 0;
}
