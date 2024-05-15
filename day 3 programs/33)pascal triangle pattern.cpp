#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 0; i < rows; i++) {
        int val = 1;
        for (int j = 1; j <= rows - i; j++) {
            std::cout << "   ";
        }
        for (int k = 0; k <= i; k++) {
            std::cout << "      " << val;
            val = val * (i - k) / (k + 1);
        }
        std::cout << std::endl << std::endl;
    }

    return 0;
}
