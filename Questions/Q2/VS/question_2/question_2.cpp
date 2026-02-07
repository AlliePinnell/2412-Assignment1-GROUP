#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


/* Q2: 
 1) reverseLinkedList -> reverses the order of elements in a given singly linked list

 2) Engage the user
 2.1) Insert elements into a linked list
 2.2) Traverse and print its elements
 2.3) Apply the reverseLinkedList function to reverse the order of the list
 2.4) Traverse and print the reversed list
*/

// Linked List Node Structure | 
struct node {
    int data;
    struct node* next;

    node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};


// 2.1 | Insert Node Function 
// Time Complexity: Linear - Θ(n) [Θ(1) + Θ(n) => Θ(n)]
void insertNode (node*& head, int newData) {

    // Base case: if the list is empty, create a new node
    // Time Complexity: Constant - Θ(1)
    if (head == nullptr) {
        node* tp = new node(newData);
        head = tp;

        return;
    } 

    node* tp = head;

    // Traverse to the end of the list
    // Time Complexity: Linear -  Θ(n)
    while (tp->next) { // Θ(n)
        tp = tp->next;
    }

    tp->next = new node(newData);

    return;
}


// 2.2 | Output Singly Linked List Function 
// Time Complexity: Θ(n)
void outputSinglyLinkedList (node*& head) {
    node* tp = head;
    while (tp) { // Θ(n)
        std::cout << tp->data << " -> ";
        tp = tp->next;
    }
}


// 1 | Reverse Linked List Function 
// Time Complexity: Θ(n)
node* reverseLinkedList (node*& head) {
    node* previous = nullptr;
    node* current = head;
    node* next = nullptr;

    // Iterate through the list and reverse the links
    while (current) { // Θ(n)
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

int main () {
    string input = "";
    
    node* head = nullptr;

    std::cout << " Enter elements to insert into the linked list (type 'done' to finish): " << std::endl;

    while (input != "done") {
        std::cin >> input;
        std::cout << std::endl;

        if (input == "done") {
            break;
        }

        insertNode(head, stoi(input) ); 
    }

    outputSinglyLinkedList(head);

    std::cout << std::endl;

    head = reverseLinkedList(head);

    outputSinglyLinkedList(head);  
}

