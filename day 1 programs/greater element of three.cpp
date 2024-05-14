#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    int maxVal = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    return maxVal;
}

int main() {
    int a = 4, b = 13, c = 7;
    cout << "The greater element of the three elements is " << findMax(a, b, c);
    return 0;
}
