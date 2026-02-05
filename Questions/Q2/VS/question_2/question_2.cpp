#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct node {
    int data;
    struct node* next;

    node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

void insertNode (node*& head, int newData) {

    if (head == nullptr) {
        node* tp = new node(newData);
        head = tp;

        return;
    } 

    node* tp = head;

    while (tp->next) {
        tp = tp->next;
    }

    tp->next = new node(newData);

    return;
}

void outputSinglyLinkedList (node*& head) {
    node* tp = head;
    while (tp) {
        std::cout << tp->data << " -> ";
        tp = tp->next;
    }
}

node* reverseLinkedList (node*& head) {
    node* previous = nullptr;
    node* current = head;
    node* next = nullptr;

    while (current) {
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

