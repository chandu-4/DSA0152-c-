#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    (number % 3 == 0) ? cout << "The number is divisible by 3." : cout << "The number is not divisible by 3.";

    return 0;
}
