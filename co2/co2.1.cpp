#include <iostream>
#include <cmath>
void findSquareRoot(double number) {
    if (number < 0) {
        std::cout << "Error: Negative number entered. Cannot find the square root of a negative number." << std::endl;
    } else {
        double result = sqrt(number);
        std::cout << "The square root of " << number << " is " << result << std::endl;
    }
}
inline void increment(int& number) {
    ++number;
}
inline void decrement(int& number) {
    --number;
}

int main() {
    double number;
    int intNumber;
    std::cout << "Enter a number to find its square root: ";
    std::cin >> number;
    findSquareRoot(number);
    std::cout << "Enter a number to increment: ";
    std::cin >> intNumber;
    increment(intNumber);
    std::cout << "Incremented number: " << intNumber << std::endl;
    std::cout << "Enter a number to decrement: ";
    std::cin >> intNumber;
    decrement(intNumber);
    std::cout << "Decremented number: " << intNumber << std::endl;

    return 0;
}

