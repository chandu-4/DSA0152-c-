#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int regNo;
    int marks[5];

public:
    void getdata() {
        std::cout << "Enter student's name: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << "Enter registration number: ";
        std::cin >> regNo;
        std::cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; ++i) {
            std::cin >> marks[i];
        }
    }
    int tot_marks();
};
int Student::tot_marks() {
    int total = 0;
    for (int i = 0; i < 5; ++i) {
        total += marks[i];
    }
    return total;
}

int main() {
    Student student;
    student.getdata();
    int totalMarks = student.tot_marks();
    std::cout << "Total marks: " << totalMarks << std::endl;

    return 0;
}

