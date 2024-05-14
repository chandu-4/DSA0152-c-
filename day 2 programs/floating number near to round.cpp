#include <iostream>
#include <cmath>

int main() {
    double num;

    std::cout << "Enter a floating-point number: ";
    std::cin >> num;

    double floor_num = floor(num);
    double ceil_num = ceil(num);

    std::cout << "Floor: " << floor_num << std::endl;
    std::cout << "Ceil: " << ceil_num << std::endl;

    if (floor_num == ceil_num) {
        std::cout << "The number is an integer." << std::endl;
    } else {
        double diff_floor = num - floor_num;
        double diff_ceil = ceil_num - num;

        if (diff_floor < diff_ceil) {
            std::cout << "The number rounded to the nearest integer is " << static_cast<int>(floor_num) << "." << std::endl;
        } else {
            std::cout << "The number rounded to the nearest integer is " << static_cast<int>(ceil_num) << "." << std::endl;
        }
    }

    return 0;
}
