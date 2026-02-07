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
		std::cout << "Stack is empty. Cannot pop from an empty stack.\n";
        return 0;
    }

    node* tp = top;
    top = tp->next;
    int e = tp->data;
    delete tp;

    //std::cout << "Popped LL: " << e << "\n";

    return e;
}
void PushLL(int e) {
    newTop = new node(e);
    newTop->next = top;
    top = newTop;
}


int PopArray() {
    if (arrTop < 0) {
        std::cout << "Array stack empty\n";
        return -1;
    }

    int t = arrTop;
    arr[arrTop] = 0;
    arrTop--;

    /* this stuff has gotta go in the final*/
    //if (!(t > 10)) {
    //    std::cout << "Popped Arr: " << t << "\n";
    //}  

    return arrTop;
}
void PushArray(int e) {
    arr[arrTop + 1] = e;
    arrTop++;
}


int main()
{
	int sizes[] = { 10, 100 };

	for (int n : sizes) {
        arrTop = -1;
        arr.resize(n);

        for (int i = 0; i < n; ++i) {
            PushLL(i);
            PushArray(i);
        }

        //std::cout << "Pushed " << n << " elements | array size = " << arr.size();
        //std::cout << "\n";
        //std::cout << "Pushed " << n << " elements | linked list size = ";
        //outputSinglyLinkedList(top);
        //std::cout << "\n";

        for (int i = 0; i < n; ++i) {
            PopLL();
            PopArray();
        }

        if (top == nullptr) {
            std::cout << "Stack empty after popping all elements.\n";
        } else {
            std::cout << "Stack not empty after popping all elements.\n";
		}

  //      outputSinglyLinkedList(top);

        newTop = nullptr;
	}
}
