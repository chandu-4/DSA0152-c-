#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num;
    int n = 0;
    int result = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0) {
        int remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (isArmstrong(num)) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
