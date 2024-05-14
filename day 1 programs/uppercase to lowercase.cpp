#include <iostream>
#include <cctype>
using namespace std;

void toLowerCase(string &str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    toLowerCase(str);

    cout << "Lower case string: " << str << endl;

    return 0;
}
