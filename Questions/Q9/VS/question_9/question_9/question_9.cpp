#include <iostream>
#include <string>
#include <cctype> 

bool isPalindrome(const std::string& str) { 
}

bool isPalindromeTemplate(const std::string& str) {
    int L = 0;
    int R = str.length() - 1;

    for (int i = 0; i < (str.length() / 2); i++) {
        if (tolower(str[L]) != tolower(str[R])) {
            return false;
        }
        std::cout << "For Loop running\n";
        R = str.length() - 1 - i;
        std::cout << R << "\n";
        std::cout << "String Length: " << str.length() << "\n";
    }
    return true;
}


int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The entered string is a palindrome.\n";
    }
    else {
        std::cout << "The entered string is not a palindrome.\n";
    }

    return 0;
}