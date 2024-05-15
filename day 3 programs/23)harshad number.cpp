#include <iostream>
using namespace std;

bool isHarshad(int num) {
    int sum = 0;
    int temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isHarshad(num)) {
        cout << num << " is a Harshad number" << endl;
    } else {
        cout << num << " is not a Harshad number" << endl;
    }
    return 0;
}
