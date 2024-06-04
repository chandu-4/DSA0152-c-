#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double gpa;

public:
    Student(std::string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
        std::cout << "Student object created: " << name << std::endl;
    }
    ~Student() {
        std::cout << "Student object destroyed: " << name << std::endl;
    }
    std::string getName() { return name; }
    int getAge() { return age; }
    double getGPA() { return gpa; }
};

int main() {
    Student s1("John Doe", 20, 3.8);
    Student s2("Jane Smith", 22, 3.6);

    std::cout << "Student 1 name: " << s1.getName() << std::endl;
    std::cout << "Student 1 age: " << s1.getAge() << std::endl;
    std::cout << "Student 1 GPA: " << s1.getGPA() << std::endl;

    std::cout << "Student 2 name: " << s2.getName() << std::endl;
    std::cout << "Student 2 age: " << s2.getAge() << std::endl;
    std::cout << "Student 2 GPA: " << s2.getGPA() << std::endl;

    return 0;
}
