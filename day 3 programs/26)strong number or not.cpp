#include <iostream>

using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int n) {
    int sum = 0;
    int original = n;
    while (n > 0) {
        int digit = n % 10;         
        sum += factorial(digit);    
        n /= 10;                    
    }
    return sum == original;        
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isStrong(num)) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }

    return 0;
}

