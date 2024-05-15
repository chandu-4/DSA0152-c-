#include <iostream>
#include <cmath>

bool isNeon(int num) {
    int square = num * num;
    int sum = 0;
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isNeon(num)) {
        std::cout << num << " is a neon number." << std::endl;
    } else {
        std::cout << num << " is not a neon number." << std::endl;
    }
    return 0;
}
