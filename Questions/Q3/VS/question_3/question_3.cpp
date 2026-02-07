#include <iostream>
#include <string>

/* Q3:
    1) mergeSortedLists -> merges two sorted linked lists
    2) createSortedLinkedList -> creates a sorted linked list from an array of values
    3) printLinkedList -> prints the elements of a linked list
*/

class ListNode {
public:
    int value;
    ListNode* next;

    ListNode(int val) : value(val), next(nullptr) {}
};


// 2.1 | Insert Node Function 
// Time Complexity: Linear - Θ(n^2) [Θ(1) + Θ(n) => Θ(n)]
ListNode* createSortedLinkedList() {
    ListNode* headNode = nullptr;
    std::string userAns = "";

    while (true) {
        std::cout << "Please enter a number to insert into the list (enter 'done' to stop): ";
        std::cin >> userAns;

        if (userAns == "done") {
            break;
        }

        ListNode* newNode = new ListNode(stoi(userAns));

        if (headNode == nullptr || stoi(userAns) < headNode->value) {
            newNode->next = headNode;
            headNode = newNode;
        }
        else {
            ListNode* tempPtr = headNode;

            while (tempPtr->next != nullptr && tempPtr->next->value < stoi(userAns)) {
                tempPtr = tempPtr->next;
            }

            newNode->next = tempPtr->next;
            tempPtr->next = newNode;
        }
    }

    return headNode;
}

void printLinkedList(ListNode* headNode) {
    ListNode* tempNode = headNode;
    while (tempNode != nullptr) {
        std::cout << tempNode->value << " ";
        tempNode = tempNode->next;
    }
}

ListNode* mergeSortedLists(ListNode* list1, ListNode* list2) {
    ListNode* headNode = nullptr;

    while (list1 != nullptr) {
        ListNode* newNode = new ListNode(list1->value);

        if (headNode == nullptr || newNode->value < headNode->value) {
            newNode->next = headNode;
            headNode = newNode;
        }
        else {
            ListNode* tempPtr = headNode;

            while (tempPtr->next != nullptr && tempPtr->next->value < newNode->value) {
                tempPtr = tempPtr->next;
            }

            newNode->next = tempPtr->next;
            tempPtr->next = newNode;
        }

        list1 = list1->next;
    }

    while (list2 != nullptr) {
        ListNode* newNode = new ListNode(list2->value);

        if (headNode == nullptr || newNode->value < headNode->value) {
            newNode->next = headNode;
            headNode = newNode;
        }
        else {
            ListNode* tempPtr = headNode;

            while (tempPtr->next != nullptr && tempPtr->next->value < newNode->value) {
                tempPtr = tempPtr->next;
            }

            newNode->next = tempPtr->next;
            tempPtr->next = newNode;
        }

        list2 = list2->next;
    }

    return headNode;
}

int main()
{
    std::cout << "Create first Linked List:" << std::endl;
    ListNode* list1 = createSortedLinkedList();
    std::cout << std::endl;

    std::cout << "Create second Linked List:" << std::endl;
    ListNode* list2 = createSortedLinkedList();
    std::cout << std::endl;

    std::cout << "Sorted Merged List:" << std::endl;
    ListNode* sortedMergedList = mergeSortedLists(list1, list2);
    printLinkedList(sortedMergedList);
}