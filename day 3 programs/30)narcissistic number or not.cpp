#include <iostream>
#include <cmath> 

using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool isNarcissistic(int n) {
    int original = n;
    int sum = 0;
    int digits = countDigits(n);

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isNarcissistic(num)) {
        cout << num << " is a narcissistic number." << endl;
    } else {
        cout << num << " is not a narcissistic number." << endl;
    }

    return 0;
}

