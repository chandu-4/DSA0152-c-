#include <iostream>

using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n, fast = sumOfSquares(n);

    while (fast != 1 && slow != fast) {
        slow = sumOfSquares(slow);        
        fast = sumOfSquares(sumOfSquares(fast));
    }

    return fast == 1; 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHappy(num)) {
        cout << num << " is a happy number." << endl;
    } else {
        cout << num << " is not a happy number." << endl;
    }

    return 0;
}

