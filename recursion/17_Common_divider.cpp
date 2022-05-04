#include <iostream>

bool is_divisible (int divisible, int divider) {
    return (divisible % divider) ? false : true;
}

int common_divider (int a, int b, int divider = 1, int largest_divider = 1) {
    if (is_divisible(a, divider) && is_divisible(b, divider)) {
        largest_divider = divider;
    }
    divider++;
    if (divider > a || divider > b) return largest_divider;
    return common_divider(a, b, divider, largest_divider);
}

int main() {
    std::cout << common_divider(9, 6);
}