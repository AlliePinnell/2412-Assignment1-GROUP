#include <iostream> 
#include <stack> 
#include <string> 

struct node {
    char data;
    struct node* next;

    node(char new_data) {
        data = new_data;
        next = nullptr;
    }
};

void outputSinglyLinkedList(node*& head) {
    node* tp = head;
    while (tp) {
        std::cout << tp->data << " -> ";
        tp = tp->next;
    }
}

bool isBalanced(const std::string& parentheses) {
    char oldTop;
    node* newTop = nullptr;
    node* top = nullptr;

    node* tp = nullptr;

    int strLength = parentheses.length();
    std::cout << "String Length: " << strLength << "\n";

    if (strLength < 2 || strLength % 2 != 0) {
        return false;
    }

    for (char i = 0; i < strLength; i++) {
        std::cout << parentheses[i] << "\n";
        if (parentheses[i] == '(') {
            newTop = new node(parentheses[i]);
            newTop->next = top;
            top = newTop;
        }
        else if (parentheses[i] == ')') {
            if (top == nullptr) {
                return false;
            }

            tp = top;
            top = top->next;
            oldTop = tp->data;
            delete tp;
        }
        else {
            std::cout << "Characters besides '(' and ')' found! ";
            return false;
        }
    }
    std::cout << "\n";
    outputSinglyLinkedList(top);

    return true;
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