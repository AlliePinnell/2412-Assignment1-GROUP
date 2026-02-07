#include <iostream>

/*
    Q4: 
    1) recursiveFactorial -> calculates the factorial of a given number, 'n', using recursion
*/

// 1 | Recursive Factorial Function
// Time Complexity: Linear - Θ(n) - [Θ(1) + Θ(n) => Θ(n)]
int recursiveFactorial(int n) {
    if (n == 1) {
        // Base case: factorial of 1 is 1 - Constant - Θ(1)
        return 1;
    } 
    // Recursive case: n! = n * (n-1)! - Linear - Θ(n)
    return (n * recursiveFactorial(n-1) );
}

int main () {
    std::cout << recursiveFactorial(5)<< std::endl;
    return 0;
}