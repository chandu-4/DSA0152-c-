#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    cout << "The number of occurrences of " << x << " in the array is: " << countOccurrences(arr, n, x) << endl;

    return 0;
}
