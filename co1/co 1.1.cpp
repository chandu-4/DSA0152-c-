#include <iostream>
#include <string>

class Employee {
public:
    std::string name;
    int id;
    double salary;

    Employee(std::string n, int i, double s) : name(n), id(i), salary(s) {}

    void display() {
        std::cout << "Employee Name: " << name << ", ID: " << id << ", Salary: $" << salary << std::endl;
    }
};

class Teacher {
public:
    std::string name;
    std::string subject;
    int experience;

    Teacher(std::string n, std::string s, int e) : name(n), subject(s), experience(e) {}

    void display() {
        std::cout << "Teacher Name: " << name << ", Subject: " << subject << ", Experience: " << experience << " years" << std::endl;
    }
};

class Car {
public:
    std::string make;
    std::string model;
    int year;

    Car(std::string m, std::string mo, int y) : make(m), model(mo), year(y) {}

    void display() {
        std::cout << "Car Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }
};
class Company {
public:
    std::string name;
    int numberOfEmployees;

    Company(std::string n, int num) : name(n), numberOfEmployees(num) {}

    void display() {
        std::cout << "Company Name: " << name << ", Number of Employees: " << numberOfEmployees << std::endl;
    }
};

class Class {
public:
    std::string className;
    int numberOfStudents;

    Class(std::string cn, int num) : className(cn), numberOfStudents(num) {}

    void display() {
        std::cout << "Class Name: " << className << ", Number of Students: " << numberOfStudents << std::endl;
    }
};

class Vehicle {
public:
    std::string type;
    std::string registrationNumber;

    Vehicle(std::string t, std::string rn) : type(t), registrationNumber(rn) {}

    void display() {
        std::cout << "Vehicle Type: " << type << ", Registration Number: " << registrationNumber << std::endl;
    }
};

int main() {
    Employee emp1("Alice", 101, 50000.0);
    Teacher teacher1("Bob", "Mathematics", 10);
    Car car1("Toyota", "Corolla", 2020);
    Employee emp2 = Employee("Charlie", 102, 55000.0);
    Teacher teacher2 = Teacher("Daisy", "Physics", 8);
    Car car2 = Car("Honda", "Civic", 2019);
    emp1.display();
    teacher1.display();
    car1.display();

    emp2.display();
    teacher2.display();
    car2.display();
    Company company("TechCorp", 200);
    Class classroom("10th Grade", 30);
    Vehicle vehicle("SUV", "XYZ-1234");

    company.display();
    classroom.display();
    vehicle.display();

    return 0;
}

