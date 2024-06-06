#include <iostream>
class B; 
class A {
private:
    int numA;
public:
    A(int n) : numA(n) {}
    friend int max(A, B);
};
class B {
private:
    int numB;
public:
    B(int n) : numB(n) {}
    friend int max(A, B);
};
int max(A a, B b) {
    return (a.numA > b.numB) ? a.numA : b.numB;
}

int main() {
    int valueA, valueB;
    
    std::cout << "Enter the first number: ";
    std::cin >> valueA;
    std::cout << "Enter the second number: ";
    std::cin >> valueB;

    A a(valueA);
    B b(valueB);

    std::cout << "The maximum number is: " << max(a, b) << std::endl;

    return 0;
}

