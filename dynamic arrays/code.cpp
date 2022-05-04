#include <iostream>
void swap(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int size;
    std::cout << "Please enter the size of the matrix: ";
    std::cin >> size;
    int** matrix = new int*[size];
    //create matrix
    for (int i = 0; i < size; ++i) {
        matrix[i] = new int [size];
    }
    //input matrix
    for (int i = 0; i < size; ++i) {
        std::cout << "Please insert the " << i << "nd row of numbers: ";
        for (int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    //print matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //swap matrix
    for (int i = 0; i <= size/2; ++i) {
            if (i < size/2) {
                for (int j = 0; j < size; ++j) {
                swap(&matrix[i][j], &matrix[size - 1 - i][size - 1 - j]);
                }
            } else if (size % 2 == 1) {
                for (int j = 0; j < size / 2; ++j) {
                swap(&matrix[i][j], &matrix[size - 1 - i][size - 1 - j]);
            }
        }
    }

    // for (int i = 0; i < size; ++i) {
    //     //swap(matrix[i],matrix[size - 1 - i]);
    //     for (int j = 0; j < size/2; ++j) {
    //         swap(&matrix[i][j], &matrix[i][size - 1 - j]);
    //     }
    // }

    //print matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}