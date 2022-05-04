#include <iostream>

int binMax(int a, int b) {
    return (a > b) ? a : b;
}

int Max(int arr[], int size) {
    if (size == 1) return arr[0];
    if (size == 2) return binMax(arr[0],arr[1]);
    return binMax(arr[size - 1], Max(arr, size - 1));
}

int main() {
    int arr[5] {};
    for (int i = 0; i < 5; ++i) {
        std::cin >> arr[i];
    }
    std::cout << Max(arr,5);
}