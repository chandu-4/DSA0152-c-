#include <iostream>
using namespace std;

int main() {
    char grade;
    double salary, bonus, total;

    cout << "Enter the grade of the employee: ";
    cin >> grade;

    cout << "Enter the employee salary: ";
    cin >> salary;

    if (grade == 'A' || grade == 'a') {
        bonus = salary * 0.05;
    } else if (grade == 'B' || grade == 'b') {
        bonus = salary * 0.10;
    } else {
        cout << "Invalid grade. Please enter A or B." << endl;
        return 1;
    }

    if (salary < 10000) {
        bonus += salary * 0.02;
    }

    total = salary + bonus;

    cout << "Salary=" << salary << endl;
    cout << "Bonus=" << bonus << endl;
    cout << "Total to be paid: " << total << endl;

    return 0;
}
