#include <iostream>
using namespace std;

float findAverage(float arr[], int n) {
    int i;
    float sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    float arr[] = {1.5, 2.6, 3.7, 4.8, 5.9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The average of all elements in the array is: " << findAverage(arr, n) << endl;
    return 0;
}
