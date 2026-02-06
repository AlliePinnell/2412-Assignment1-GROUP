#include <iostream>
#include <string>
#include <cctype> 

bool isPalindrome(const std::string& str) {
    // Your code here 
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