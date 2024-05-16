#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {1, 2, 3, 4}, {5, 6, 7, 8} };
    int n = 4;
    int principalDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        principalDiagonalSum += matrix[i][i];
    }
    for (int i = 0; i < n; i++) {
        secondaryDiagonalSum += matrix[i][n-i-1];
    }

    cout << "Sum of principal diagonal: " << principalDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}
