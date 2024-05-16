#include <iostream>

void deleteElement(int arr[], int& n, int position) {
    if (position >= n || position < 0) {
        std::cout << "Invalid position." << std::endl;
        return;
    }

    for (int i = position; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    
    --n;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; 
    int n = 5; 

    int position = 2; 

    std::cout << "Original array: ";
    printArray(arr, n);

    deleteElement(arr, n, position);

    std::cout << "Array after deletion: ";
    printArray(arr, n);

    return 0;
}

