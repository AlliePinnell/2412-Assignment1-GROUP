#include <iostream>

int recursiveFibonacci(int number) {
    if (number <= 1) {
        return number; 

    } else {
        return (recursiveFibonacci(number - 1) + recursiveFibonacci(number - 2)  );
    }
}

int main () {
    for (int i = 0; i < 7; i++) {
        std::cout << recursiveFibonacci(i) << ", ";
    }
}
