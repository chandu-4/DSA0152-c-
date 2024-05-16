#include <iostream>
void addMatrices(const int mat1[][3], const int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void printMatrix(const int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix1[rows][cols] = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
    int matrix2[rows][cols] = {{9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1}};
    int result[rows][cols];
    addMatrices(matrix1, matrix2, result, rows, cols);
    std::cout << "Resultant Matrix:" << std::endl;
    printMatrix(result, rows, cols);

    return 0;
}

