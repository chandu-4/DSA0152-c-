#include <iostream>
#include <iomanip>
#include <cmath>    /

int main() {
    double num1, num2;
    
    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;
    
    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;
    

    double sum = num1 + num2;
    std::cout << "Addition: " << num1 << " + " << num2 << " = " << sum << std::endl;

    
    double difference = num1 - num2;
    std::cout << "Subtraction: " << num1 << " - " << num2 << " = " << difference << std::endl;


    double product = num1 * num2;
    std::cout << "Multiplication: " << num1 << " * " << num2 << " = " << product << std::endl;

    if (num2 != 0) {
        double quotient = num1 / num2;
        std::cout << "Division: " << num1 << " / " << num2 << " = " << quotient << std::endl;
    } else {
        std::cout << "Division: Division by zero error" << std::endl;
    }


    double modResult = std::fmod(num1, num2);
    std::cout << "Modulo (fmod): " << num1 << " % " << num2 << " = " << modResult << std::endl;

    return 0;
}

