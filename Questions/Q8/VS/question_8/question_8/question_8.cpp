#include <iostream>

struct node {
    int data;
    node* next;
};

node* top = nullptr;
node* bottom = nullptr;


void badPop() {
    e = top->data;
    tp = bottom;
    while (tp->next != top)
    {
        tp = tp->next;
    }
    top = tp;
    delete tp->next;
    tp->next = nullptr;
    return e;
}

void goodWay() {
    if (top == nullptr) {
        return;
    }

    node* tp = top;
    top = top->next;
    e = tp->data;
    delete tp;
    return e;
}

int main()
{
	int sizes[] = { 10, 100, 1000, 10000, 100000 };

	for (int n : sizes) {

	}
}