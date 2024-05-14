#include <iostream>
#include <cmath>   

int main() {
    double principal, rate, time, simpleInterest, compoundInterest;


    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (in %): ";
    std::cin >> rate;

    std::cout << "Enter the time period in years: ";
    std::cin >> time;


    simpleInterest = (principal * rate * time) / 100.0;
    std::cout << "Simple Interest = " << simpleInterest << std::endl;


    compoundInterest = principal * (pow((1 + rate / 100.0), time)) - principal;
    std::cout << "Compound Interest = " << compoundInterest << std::endl;

    return 0;
}

