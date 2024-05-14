#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Error! Factorial of a negative number doesn't exist.";
    } else {
        for(int i = 1; i <= num; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << num << " = " << fact;
    }

    return 0;
}
