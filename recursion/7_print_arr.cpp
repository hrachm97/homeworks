#include <iostream>
void printArr(int arr[], int size, int length) {
    if (size > 0) {
        printArr(arr, size - 1, length);
        if (size == length) {
            std::cout << arr[size-1] << std::endl;
        } else {
            std::cout << arr[size-1] << ", ";
        }
    }
}
void inputArr(int arr[], int size) {
    if (size > 0) {
        inputArr(arr, size - 1);
        std::cin >> arr[size - 1];
    }
}
int main() {
    const int size = 10;
    std::cout << "Input " << size << " numbers to an array for printing it.\n";
    int arr[size] {};
    inputArr(arr, size);
    printArr(arr, size, size);
    return 0;
}