
#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return M_PI * radius * radius;
    }

    double calculatePerimeter() override {
        return 2 * M_PI * radius;
    }
};
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }

    double calculatePerimeter() override {
        return 2 * (length + width);
    }
};
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() override {
        return 0.5 * base * height;
    }

    double calculatePerimeter() override {
        return 3 * base;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4);

    std::cout << "Circle:" << std::endl;
    std::cout << "Area: " << circle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl;

    std::cout << "\nRectangle: " << std::endl;
    std::cout << "Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    std::cout << "\nTriangle: " << std::endl;
    std::cout << "Area: " << triangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl;

    return 0;
}
