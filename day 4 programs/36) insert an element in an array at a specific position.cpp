#include <iostream>

void insertElement(int arr[], int& n, int capacity, int element, int position) {
    if (n >= capacity) {
        std::cout << "Cannot insert element, array is full." << std::endl;
        return;
    }
    if (position > n || position < 0) {
        std::cout << "Invalid position." << std::endl;
        return;
    }

    for (int i = n; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    ++n;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    const int capacity = 10; 
    int arr[capacity] = {1, 2, 3, 4, 5}; 
    int n = 5; 

    int element = 99;
    int position = 2; 

    std::cout << "Original array: ";
    printArray(arr, n);

    insertElement(arr, n, capacity, element, position);

    std::cout << "Array after insertion: ";
    printArray(arr, n);
    return 0;
}

