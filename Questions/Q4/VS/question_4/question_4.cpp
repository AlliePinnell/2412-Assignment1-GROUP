#include <iostream>

int recursiveFactorial(int number) {
    if (number == 1) {
        return 1;
    } else {
        return (number * recursiveFactorial(number-1) );
    }
}

int main () {
    std::cout << recursiveFactorial(5)<< std::endl;
}