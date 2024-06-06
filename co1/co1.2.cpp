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

// Rectangle class
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
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(4.0);
    Rectangle rectangle(3.0, 4.0);
    Triangle triangle(3.0, 4.0, 5.0);

    std::cout << "Circle:" << std::endl;
    std::cout << "Area: " << circle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl;

    std::cout << "\nRectangle:" << std::endl;
    std::cout << "Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    std::cout << "\nTriangle:" << std::endl;
    std::cout << "Area: " << triangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl;

    return 0;
}
