#include <iostream>
#include <string>
#include <cctype>

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

/*node* createDoublyLinkedList(node* head, node* tail, string line) {
	node* currentLeft = nullptr;
	node* currentRight = nullptr;
	node* prevLeft = nullptr;
	node* prevRight = nullptr

	for (int i = 0; i < line.size(); i++) {
		if (head == nullptr && tail == nullptr) {
			head = new node(line[i]);
			tail = new node(line[line.size() - 1 - i]);

			currentLeft = head;
			currentRight = tail;
			continue;
		}

		node* tpLeft = new node(line[i]);
		node* tpRight = new node(line[line.size() - 1 - i]);

		currentLeft->left = tpLeft;
		currentRight->right = tpRight;

	}// end for
}*/

// THIS IMPLEMENTATION CHANGES UP HIS FUNCTION AND DOESN'T USE std::string& str SO MIGHT NOT BE OKAY TO USE
bool isPalindrome(const std::string& str, node* head, node* tail) {
	node* currentLeft = head;
	node* currentRight = tail;

	while (currentLeft) {

		std::cout << "Current Left: " << currentLeft->data << std::endl;
		std::cout << "Current Right: " << currentLeft->data << std::endl;

		if (currentLeft->data != currentRight->data) {
			return false;
		}

		currentLeft = currentLeft->next;
		currentRight = currentRight->prev;
	}

	return true;
}

using namespace std;

int main() {
	std::string input;

	std::cout << "Enter a string: ";

	//std::getline(std::cin, input);

	// DELETE THIS, THIS IS TEST CODE

	// Create the first node (head of the list)
	node* head = new node('a');

	// Create and link the second node
	head->next = new node('b');
	head->next->prev = head;;

	// Create first tail node
	node* tail = new node('a');

	// Create and link the second node
	tail->prev = new node('b');
	tail->prev->next = tail;

	// Link the Create Nodes
	tail->prev->prev = head->next;
	head->next->next = tail->prev;
	// Traverse the list forward and print elements
	std::cout << "Outputting Through Head" << std::endl;
	node* temp = head;
	while (temp != nullptr)
	{
		cout << temp->data;
		if (temp->next != nullptr)
		{
			cout << " <-> ";
		}
		temp = temp->next;
	}
	std::cout << std::endl;
	std::cout << "Outputting Through Tail" << std::endl;
	node* temp2 = tail;
	while (temp2 != nullptr)
	{
		cout << temp2->data;
		if (temp2->prev != nullptr)
		{
			cout << " <-> ";
		}
		temp2 = temp2->prev;

	}
	std::cout << std::endl;

	if (isPalindrome(input, head, tail) == true) {

		std::cout << "The entered string is a palindrome.\n";

	} else {

		std::cout << "The entered string is not a palindrome.\n";

	}
	return 0;
}
