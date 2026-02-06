#include <iostream>
#include <vector>
using std::vector;

struct node {
    int data;
    struct node* next;

    node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

node* newTop = nullptr;
node* top = nullptr;
node* bottom = nullptr;

node* topLL = nullptr;
vector<int> arr;

int arrTop;

//void badPop() {
//    e = top->data;
//    tp = bottom;
//    while (tp->next != top)
//    {
//        tp = tp->next;
//    }
//    top = tp;
//    delete tp->next;
//    tp->next = nullptr;
//    return e;
//}

//void badPush() {
//    for (i = bottom; i > 0; i--) {
//        s[i + 1] = s[i];
//    }
//    bottom++;
//    s[0] = e;
//}

void outputSinglyLinkedList(node*& head) {
    node* tp = head;
    while (tp) {
        std::cout << tp->data << " -> ";
        tp = tp->next;
    }
}

int PopLL() {
    if (top == nullptr) {
        return 0;
    }

    node* tp = top;
    top = top->next;
    int e = tp->data;
    delete tp;
    return e;
}
void PushLL(int e) {
    newTop = new node(e);
    newTop->next = top;
    top = newTop;
}


int PopArray() {
    int t = arrTop;
    arr[arrTop] = 0;
    arrTop--;

    /* this stuff has gotta go in the final*/
    if (!(t > 10)) {
        std::cout << "Popped: " << t << "\n";
    }  

    return arrTop;
}
void PushArray(int e) {
    arr[arrTop + 1] = e;
    arrTop++;
}


int main()
{
	int sizes[] = { 10, 100, 1000, 10000, 100000 };

	for (int n : sizes) {
        arrTop = -1;
        arr.resize(n);

        for (int i = 0; i < n; ++i) {
            PushLL(i);
            PushArray(i);
        }

        std::cout << "Pushed " << n << " elements | array size = " << arr.size();
        std::cout << "\n";
        std::cout << "Pushed " << n << " elements | linked list size = " << outputSinglyLinkedList();
        std::cout << "\n";

        arrTop = n - 1;

        for (int i = 0; i < n; ++i) {
            PopLL();
            PopArray();
        }

        std::cout << "Stack empty after popping all elements.\n\n";

	}
}

//for (int n : sizes) {
//    // Reset stacks for each benchmark size
//    // Clear linked list
//    while (top) {
//        goodPop();
//    }
//    // Clear array-backed stack and reserve capacity
//    arr.clear();
//    arr.reserve(n);
//    arrTop = -1;
//
//    for (int i = 0; i < n; ++i) {
//        // Use i directly; avoid invalid expression like i[0]
//        goodPushLL(i);
//        goodPushArray(i);
//    }
//
//    std::cout << "Pushed " << n << " elements: array size = " << arr.size() << "\n";
//
//    // Cleanup linked list before next iteration
//    while (top) {
//        goodPop();
//    }
//}
