#include <iostream>

void reverseArray(int arr[], int size) {
    for (int start = 0, end = size - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    reverseArray(arr, size);

    std::cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

