#include <iostream>

void transposeMatrix(int matrix[3][3]) {
    int temp;

    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[3][3];

    std::cout << "Ingrese los elementos de la matriz 3x3:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Matriz original:" << std::endl;
    printMatrix(matrix);

    transposeMatrix(matrix);

    std::cout << "Matriz transpuesta:" << std::endl;
    printMatrix(matrix);

    return 0;
}
