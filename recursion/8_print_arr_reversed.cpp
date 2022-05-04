#include <iostream>
void printArrRev(int arr[], int size) {
    if (size > 0) {
        if (size == 1) {
            std::cout << arr[size-1] << std::endl;
        } else {
            std::cout << arr[size-1] << ", ";
        }
        printArrRev(arr, size - 1);
    }
}
void inputArr(int arr[], int size) {
    if (size > 0) {
        inputArr(arr, size - 1);
        std::cin >> arr[size - 1];
    }
}
int main() {
    const int size = 4;
    std::cout << "Input " << size << " numbers to an array for printing it.\n";
    int arr[size] {};
    inputArr(arr, size);
    printArrRev(arr, size);
    return 0;
}