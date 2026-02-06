#include <iostream>
#include <string>
using namespace std;

struct node {
	int data;
	node* next;

    node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

int Sum(node* head, int num) {
	if (head == nullptr) {
		return num;
	} else {
		return Sum(head->next, num + head->data);
	}
}

int Search (node* head, int searchNum) {
	if (head->data != searchNum) {
		return Search(head->next, searchNum);
	} else {
		return head->data;
	}

}

void insertNode(node*& head, int newData) {

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

void outputSinglyLinkedList(node*& head) {
    node* tp = head;
    while (tp) {
        std::cout << tp->data << " -> ";
        tp = tp->next;
    }
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

        insertNode(head, stoi(input));
    }

    outputSinglyLinkedList(head);

    std::cout << Sum(head, 0) << std::endl;
    std::cout << Search(head, 6) << std::endl;
}

