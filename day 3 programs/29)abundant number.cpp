#include <iostream>

using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

bool isAbundant(int n) {
    return sumOfDivisors(n) > n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAbundant(num)) {
        cout << num << " is an abundant number." << endl;
    } else {
        cout << num << " is not an abundant number." << endl;
    }

    return 0;
}

