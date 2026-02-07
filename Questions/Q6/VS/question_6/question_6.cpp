#include <iostream>
#include <string>
using namespace std;

/*
  Q6: 
    1) Sum -> calculates the sum of all the elements in the linked list
    2) Search -> searches for a specific element in the linked list
    3) insertNode -> inserts a new node at the end of the linked list
    4) outputSinglyLinkedList -> outputs the linked list
*/


struct node {
	int data;
	node* next;

    node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// 1 | Sum Function
// Time Complexity: Linear - Θ(n) [Θ(1) + Θ(n) => Θ(n)]
int Sum(node* head, int num) {
	if (head == nullptr) {
		// Base case: if the list is empty, return the accumulated sum - Constant - Θ(1)
		return num;
	} else {
		// Recursive case: add current node's data and recurse - Linear - Θ(n)
		return Sum(head->next, num + head->data);
	}
}

// 2 | Search Function
// Time Complexity: Linear - Θ(n) [Θ(1) + Θ(n) => Θ(n)]
int Search (node* head, int searchNum) {
	if (head->data != searchNum) {
		// Recursive case: element not found, search the next node - Linear - Θ(n)
		return Search(head->next, searchNum);
	} else {
		// Base case: element found, return its data - Constant - Θ(1)
		return head->data;
	}

}

// 3 | Insert Node Function
// Time Complexity: Linear - Θ(n) [Θ(1) + Θ(n) => Θ(n)]
void insertNode(node*& head, int newData) {

    // Base case: if the list is empty, create a new node
    // Time Complexity: Constant - Θ(1)
    if (head == nullptr) {
        node* tp = new node(newData);
        head = tp;

        return;
    }

    node* tp = head;

    // Traverse to the end of the list
    // Time Complexity: Linear - Θ(n)
    while (tp->next) { // Θ(n)
        tp = tp->next;
    }

    tp->next = new node(newData);

    return;
}

// 4 | Output Singly Linked List Function
// Time Complexity: Linear - Θ(n)
void outputSinglyLinkedList(node*& head) {
    node* tp = head;
    while (tp) { // Θ(n)
        std::cout << tp->data << " -> ";
        tp = tp->next;
    }
}

int main () {
    string input = "";

    node* head = nullptr;

    std::cout << " Enter elements to insert into the linked list (type 'done' to finish): " << std::endl;

    // Time Complexity: Linear - Θ(n)
    while (input != "done") {
        std::cin >> input;
        std::cout << std::endl;

        if (input == "done") {
            break;
        }

        insertNode(head, stoi(input));
    }

    outputSinglyLinkedList(head);

    std::cout << Sum(head, 0) << std::endl;
    std::cout << Search(head, 6) << std::endl;
}

