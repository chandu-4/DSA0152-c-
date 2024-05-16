#include <iostream>

void multiplyMatrices(int** matrix1, int** matrix2, int** result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1 = 2;
    int cols1 = 3;
    int cols2 = 2;

    int** matrix1 = new int*[rows1];
    int** matrix2 = new int*[cols1];
    int** result = new int*[rows1];

    for (int i = 0; i < rows1; i++) {
        matrix1[i] = new int[cols1];
    }
    for (int i = 0; i < cols1; i++) {
        matrix2[i] = new int[cols2];
    }
    for (int i = 0; i < rows1; i++) {
        result[i] = new int[cols2];
    }

    // Initialize matrices
    matrix1[0][0] = 1; matrix1[0][1] = 2; matrix1[0][2] = 3;
    matrix1[1][0] = 4; matrix1[1][1] = 5; matrix1[1][2] = 6;

    matrix2[0][0] = 7; matrix2[0][1] = 8;
    matrix2[1][0] = 9; matrix2[1][1] = 10;
    matrix2[2][0] = 11; matrix2[2][1] = 12;

    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows1; i++) {
        delete[] matrix1[i];
        delete[] result[i];
    }
    for (int i = 0; i < cols1; i++) {
        delete[] matrix2[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
