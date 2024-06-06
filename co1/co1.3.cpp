#include <iostream>
#include <vector>
#include <string>
class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}

    virtual void displayInfo() const = 0; 

    virtual ~Person() {}
};
class Student : public Person {
private:
    int studentID;
    std::string major;

public:
    Student(std::string n, int a, int id, std::string m)
        : Person(n, a), studentID(id), major(m) {}

    void displayInfo() const {
        std::cout << "Student Name: " << name << ", Age: " << age 
                  << ", ID: " << studentID << ", Major: " << major << std::endl;
    }
};
class Professor : public Person {
private:
    int professorID;
    std::string department;

public:
    Professor(std::string n, int a, int id, std::string dept)
        : Person(n, a), professorID(id), department(dept) {}

    void displayInfo() const {
        std::cout << "Professor Name: " << name << ", Age: " << age 
                  << ", ID: " << professorID << ", Department: " << department << std::endl;
    }
};
class Course {
private:
    std::string courseName;
    std::string courseCode;
    Professor* instructor;
    std::vector<Student*> enrolledStudents;

public:
    Course(std::string cn, std::string cc, Professor* prof)
        : courseName(cn), courseCode(cc), instructor(prof) {}

    void enrollStudent(Student* student) {
        enrolledStudents.push_back(student);
    }

    void displayCourseInfo() const {
        std::cout << "Course Name: " << courseName << ", Course Code: " << courseCode << std::endl;
        std::cout << "Instructor: ";
        instructor->displayInfo();
        std::cout << "Enrolled Students: " << std::endl;
        for (size_t i = 0; i < enrolledStudents.size(); ++i) {
            enrolledStudents[i]->displayInfo();
        }
    }
};

int main() {
    Professor prof("Dr. Smith", 45, 1001, "Computer Science");
    Course course("Introduction to Programming", "CS101", &prof);
    Student student1("Alice", 20, 2001, "Computer Science");
    Student student2("Bob", 21, 2002, "Computer Science");
    course.enrollStudent(&student1);
    course.enrollStudent(&student2);
    course.displayCourseInfo();

    return 0;
}

