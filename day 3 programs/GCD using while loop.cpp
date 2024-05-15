#include <iostream>
using namespace std;

int main() {
    int n1, n2, hcf;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if(n1 < n2)
        swap(n1, n2);

    do {
        hcf = n2;
        n2 = n1 % n2;
        n1 = hcf;
    } while(n2 != 0);

    cout << "HCF = " << hcf;

    return 0;
}
