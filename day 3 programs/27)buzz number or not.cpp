#include <iostream>

using namespace std;


bool isBuzzNumber(int n) {
    return (n % 10 == 7 || n % 7 == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isBuzzNumber(num)) {
        cout << num << " is a Buzz number." << endl;
    } else {
        cout << num << " is not a Buzz number." << endl;
    }

    return 0;
}

