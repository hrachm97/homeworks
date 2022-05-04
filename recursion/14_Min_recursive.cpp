#include <iostream>

int binMin(int a, int b) {
    return (a < b) ? a : b;
}

int Min(int arr[], int size) {
    if (size == 1) return arr[0];
    if (size == 2) return binMin(arr[0],arr[1]);
    return binMin(arr[size - 1], Min(arr, size - 1));
}

int main() {
    int arr[5] {};
    for (int i = 0; i < 5; ++i) {
        std::cin >> arr[i];
    }
    std::cout << Min(arr,5);
}