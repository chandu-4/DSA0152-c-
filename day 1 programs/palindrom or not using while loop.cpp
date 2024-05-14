#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
