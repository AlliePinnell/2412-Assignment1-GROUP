#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct node {
	int data;
	struct node* next = nullptr;
	struct node* prev = nullptr;

	node(int new_data) {
		data = new_data;
		next = nullptr;
		prev = nullptr;
	}
};

void createDoubleLinkedList(node*& head, node*& tail, const std::string& line) {
	head = nullptr;
	tail = nullptr;

	for (char c : line) {
		if (!std::isalnum(c))
		{
			continue;
		}

		node* newNode = new node(std::tolower(c));

		if (!head) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}
}

bool isPalindrome(const std::string& str, node* head, node* tail) {
	node* currentLeft = head;
	node* currentRight = tail;

	while (currentLeft) {

		std::cout << "Current Left: " << currentLeft->data << std::endl;
		std::cout << "Current Right: " << currentRight->data << std::endl;

		if (currentLeft->data != currentRight->data) {
			return false;
		}

		currentLeft = currentLeft->next;
		currentRight = currentRight->prev;
	}

	return true;
}

int main() {
	std::string input;
	node* head = nullptr;
	node* tail = nullptr;

	std::cout << "Enter a string: ";

	std::getline(std::cin, input);

	createDoubleLinkedList(head, tail, input);

	if (isPalindrome(input, head, tail) == true) {
		std::cout << "The entered string is a palindrome.\n";
	}
	else {
		std::cout << "The entered string is not a palindrome.\n";
	}

	return 0;
}