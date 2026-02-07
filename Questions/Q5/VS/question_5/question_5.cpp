#include <iostream>

/*
    Q5: 
    1) recursiveFibonacci -> calculates the fibonacci sequence of a given number, 'n', using recursion
*/

int recursiveFibonacci(int n) {
    if (n <= 1) {
        // Base case: fibonacci of 0 is 0, fibonacci of 1 is 1 - Constant - Θ(1)
        return n; 

    } else {
        // Recursive case: fibonacci of n is the sum of the previous two fibonacci numbers - Exponential - Θ(2^n)
        return (recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2)  );
    }
}

int main () {
    // Exponential - Θ(2^n)
    for (int i = 0; i < 7; i++) {
        std::cout << recursiveFibonacci(i) << ", ";
    }
}
