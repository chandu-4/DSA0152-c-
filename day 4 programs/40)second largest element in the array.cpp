#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The second largest element is: " << secondLargest(arr, n);

    return 0;
}
