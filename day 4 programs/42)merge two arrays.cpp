#include <iostream>

void mergeArrays(int a[], int b[], int n, int m, int merged[]) {
    for (int i = 0; i < n; i++) {
        merged[i] = a[i];
    }

    for (int i = 0; i < m; i++) {
        merged[n + i] = b[i];
    }
}

int main() {
    int a[] = {1, 2, 3}; 
    int b[] = {4, 5, 6, 7}; 
    int n = sizeof(a) / sizeof(a[0]); 
    int m = sizeof(b) / sizeof(b[0]); 

    int merged[n + m];

    mergeArrays(a, b, n, m, merged);

    std::cout << "Merged Array: ";
    for (int i = 0; i < n + m; i++) {
        std::cout << merged[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

