# COMP-2412 Assignment 1; Deadline Feb 13, 2026 🤩🐴

Answer the following questions using C++. Implement all data structures required for the 
solutions. Submit a single zip file containing the CMake project folder and solutions for all 
questions. In your zipfile also include a README document with complementary answers and 
the names of the executables for each question. Please do not insert your build folder. Create 
one subdirectory per question and name them question_x for the x questions. 

This assignment is worth 10 points. Each question is worth one point. 

| Questions | C++ Code Completion | Docker Completion | Final Review? |
| ----------- | ----------- | ----------- | ----------- |
| 1 | ✖️ | ✖️ | ✖️ |
| 2 | ✔️ | ✖️ | ✖️ |
| 3 | ⚠️ (Cole) | ✖️ | ✖️ |
| 4 | ✔️ | ✖️ | ✖️ |
| 5 | ✔️ | ✖️ | ✖️ |
| 6 | ✔️ | ✖️ | ✖️ |
| 7 | ✔️ | ✖️ | ✖️ |
| 8 | ⚠️ (Alyssa, Emma) | ✖️ | ✖️ |
| 9 | ⚠️ (Matthew, Owen) | ✖️ | ✖️ |
| 10 | ✔️ | ✖️ | ✖️ |
| Complexity Comments | ➖ | N/A | ✖️ <- Need approval | 

# Questions for Thiago
For Question 1, is it fine to use the built-in Visual Studio sorting algorithm?
<br/><strong>If not, discover a quadratic or BST, sorting algorithm, which could be used throughout all 10 Questions if needed</strong>

What exactly are you looking for in the README complementary answers?

Do we have to do any error catching/validation for questions that do not specify it?

Are we allowed to use the built in pop and push in the #include stack?

For question 8, do we need to actually print the time of the preformance using something like the chrono module

For question 8, do you want multiple implementations of push and pop (using the bad and good versions of both), as well as using the two implementations of stacks (array and linked list)?

# Questions (copied from PDF)

## Question 1
**1:** You are tasked with implementing a function, findTargetSum, to efficiently (you are allowed to 
sort the array) locate a pair of indices (i, j) in a given array (arr) of random numbers. The goal is 
to find indices such that the sum of the elements at those positions, arr[i] + arr[j], equals a 
specified target sum. If such a pair exists, the function should return the indices; otherwise, it 
should return a null pair. 

Additionally, create a program that generates an array with 100 random elements. Prompt the 
user for a target sum, and utilize the findTargetSum function to identify and print the indices of 
the pair whose sum matches the specified target. 

Ensure that your solution demonstrates effective handling of random number arrays and 
showcases the functionality of the findTargetSum function in the context of user-input and an array 
manipulation. 

Example usage:

&emsp;Generated Array: [14, 7, 1, 3, 16, ...] (10 elements) 

&emsp;Enter the target sum: 17 

&emsp;Pair with the target sum found at indices (2, 4): 25 + 10 = 17 

## Question 2
**2:** Your task is to create a function, reverseLinkedList, that reverses the order of elements in a 
given singly linked list. Importantly, your implementation should not use recursion, providing an 
efficient iterative solution. 

Furthermore, develop a program that engages the user to insert elements into a linked list. 
Once the list is constructed, traverse and print its elements. Subsequently, apply the 
reverseLinkedList function to reverse the order of the list, and again traverse and print the 
reversed list. 

Example usage: 

&emsp;Enter elements to insert into the linked list (type 'done' to finish): 

&emsp;Insert element: 5 

&emsp;Insert element: 10 

&emsp;Insert element: 15 

&emsp;Insert element: done 

&emsp;Original Linked List: 5 -> 10 -> 15 -> nullptr 

&emsp;Reversed Linked List: 15 -> 10 -> 5 -> nullptr 

## Question 3
**3:** You are given two sorted linked lists, list1 and list2, in ascending order. Implement a function 
mergeSortedLists to merge these two lists into a new sorted linked list. The resulting list should 
maintain the sorted order of elements. 

```
class ListNode { 
public: 
int value; 
ListNode* next; 
ListNode(int val) : value(val), next(nullptr) {} 
}; 
ListNode* mergeSortedLists(ListNode* list1, ListNode* list2) { 
// Your code here 
}
```

Your task is to complete the mergeSortedLists function to merge two sorted linked lists. 
Additionally, provide any necessary helper functions, such as createSortedLinkedList to create a 
sorted linked list from an array of values, and printLinkedList to print the elements of a linked 
list. 

Write a program that uses these functions to ask the user to input numbers for list1 and list2 
(which may not be in sorted order initially), and then merge them into a third sorted list. The 
program should print the elements of the merged list. 

## Question 4
**4:** Implement a recursive function factorial to calculate the factorial of a non-negative integer n. 
The factorial of a number is the product of all positive integers less than or equal to that number. 

## Question 5
**5:** Implement a recursive function fibonacci to calculate the nth term of the Fibonacci sequence. 
The Fibonacci sequence is defined as follows: F(0) = 0, F(1) = 1, and F(n) = F(n-1) + F(n-2) for 
n > 1. 

## Question 6
**6:** Given the following node definition: 
```
class ListNode { 
public: 
int value; 
ListNode* next; 
ListNode(int val) : value(val), next(nullptr) {} 
};
```
Implement a recursive function recursiveSum, that calculates the sum of all elements in a linked 
list. Also, implement a recursive function, recursiveSearch, that checks whether a given value 
exists in the linked list. 

Write a C++ program that creates a linked list by asking the user to input values. Once the list is 
created, use the recursiveSum function to calculate and print the sum of all elements in the list. 
Then, prompt the user to enter a value and use the recursiveSearch function to check if the 
value exists in the list, printing the result. 

Example program execution: 

&emsp;Enter values to insert into the linked list (type 'done' to finish): 

&emsp;Insert value: 5 

&emsp;Insert value: 10 

&emsp;Insert value: 15 

&emsp;Insert value: done 

&emsp;

&emsp;Recursive Sum of Linked List: 30 

&emsp;

&emsp;Enter a value to search in the linked list: 10 

&emsp;Value 10 exists in the linked list. 

Ensure that your recursive functions correctly traverse the linked list and handle base cases 
appropriately. 

## Question 7
**7:** Write a C++ function, isBalanced, that takes a string containing only parentheses (( and )) 
and checks whether the parentheses are balanced. A string is considered balanced if every 
opening parenthesis has a corresponding closing parenthesis and they appear in the correct 
order. Use the following code snippet as a base for your implementation. 

```
#include <iostream> 
#include <stack> 
#include <string> 
bool isBalanced(const std::string& parentheses) { 
// Your code here 
} 
int main() { 
std::string input; 
std::cout << "Enter a string of parentheses: "; 
    std::cin >> input; 
 
    if (isBalanced(input)) { 
        std::cout << "The parentheses are balanced.\n"; 
    } else { 
        std::cout << "The parentheses are not balanced.\n"; 
    } 
 
    return 0; 
}
```
 
Your task is to implement the isBalanced function using a stack. The function should return true 
if the parentheses are balanced, and false otherwise. The program should prompt the user to 
input a string of parentheses and then use the isBalanced function to determine whether the 
input is balanced. 
 
Example program execution: 

&emsp;Enter a string of parentheses: (()) 

&emsp;&emsp;The parentheses are balanced. 
 
 
&emsp;Enter a string of parentheses: (())( 

&emsp;&emsp;The parentheses are not balanced. 
 
Ensure that your solution handles various cases, such as empty strings or strings containing characters other than parentheses. 
 
## Question 8
**8:** Using the stacks implemented in classes/labs, time the performance of the two 
implementations pushing 10, 100, 1000, 10000, and 100000 elements and popping the 
corresponding number of elements. 
 
## Question 9
**9:** Implement a C++ function isPalindrome that checks whether a given string is a palindrome. A 
palindrome is a word, phrase, or sequence of characters that reads the same forward and 
backward, disregarding spaces, punctuation, and capitalization. Implement a double-ended 
queue (deque) to ensure that the function runs efficiently. Use the following code snippet: 

```
#include <iostream> 
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
    } else { 
        std::cout << "The entered string is not a palindrome.\n"; 
    } 
 
    return 0; 
}
```
 
Your task is to implement the isPalindrome function using a deque to efficiently check whether 
the given string is a palindrome. The function should return true if the string is a palindrome and 
false otherwise. The program should prompt the user to input a string and then use the 
isPalindrome function to determine whether the input is a palindrome. 
 
Example program execution: 

&emsp;Enter a string: A man a plan a canal Panama 

&emsp;&emsp;The entered string is a palindrome. 
 
&emsp;Enter a string: Hello World 

&emsp;&emsp;The entered string is not a palindrome. 
 
## Question 10
**10:** Draw a diagram representing the structure of a circular queue implemented using an array. 
Include components such as front, rear, and elements within the circular queue. Label these 
components and illustrate how they interact to maintain the circular nature of the queue. 
 
Write a step-by-step algorithm in C++ for implementing a circular queue using arrays. Ensure 
that your algorithm covers the following operations: 

&emsp;Enqueue (Insertion): Add an element to the rear of the circular queue. 

&emsp;Dequeue (Deletion): Remove an element from the front of the circular queue. 

&emsp;Front: Retrieve the element at the front of the circular queue without removing it. 

&emsp;IsEmpty: Check if the circular queue is empty. 

&emsp;IsFull: Check if the circular queue is full. 
 
Use the following code snippet: 

 ```
class CircularQueue { 
private: 
    int front, rear, capacity; 
    int* array; 
 
public: 
    // Constructor and other necessary declarations 
     
    void enqueue(int element) { 
        // Implementation of enqueue operation 
    } 
 
    int dequeue() { 
        // Implementation of dequeue operation 
    } 
 
    int getFront() { 
        // Implementation of front operation 
    } 
 
    bool isEmpty() { 
        // Implementation of isEmpty operation 
    } 
 
    bool isFull() { 
        // Implementation of isFull operation 
    } 
};
```

# Let's get started on this fun assignment! 🧠
 
 
