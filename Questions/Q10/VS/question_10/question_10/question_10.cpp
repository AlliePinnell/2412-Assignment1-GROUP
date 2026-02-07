#include <iostream>

/*
  Q10:
    1) enqueue -> adds an element to the rear of the circular queue
    2) dequeue -> removes an element from the front of the circular queue
    3) getFront -> retrieves the element at the front without removing it
    4) isEmpty -> checks if the circular queue is empty
    5) isFull -> checks if the circular queue is full
*/

class CircularQueue {
private:
    int front, rear, capacity;
    int* array;
    int count;

public:
    // Constructor and other necessary declarations 
    CircularQueue(int limit) {
        this->capacity = limit;
        this->array = new int[capacity];
        this->front = 0;
        this->rear = -1;
        this->count = 0;
    }

    // 1 | Enqueue Function
    // Time Complexity: Constant - Θ(1)
    void enqueue(int element) {
        if (this->isFull()) { // Θ(1)
            std::cout << "Full Queue, cannot enqueue " << element << std::endl;
            return;
        }
        this->rear = (this->rear + 1) % this->capacity; // Θ(1)
        this->array[this->rear] = element; // Θ(1)
        this->count++;
    }

    // 2 | Dequeue Function
    // Time Complexity: Constant - Θ(1)
    int dequeue() {
        if (this->isEmpty()) { // Θ(1)
            std::cout << "Queue is empty, cannot dequeue" << std::endl;
            return -1;
        }
        int temp = this->array[this->front]; // Θ(1)
        this->front = (this->front + 1) % this->capacity; // Θ(1)
        this->count--;
        return temp;
    }

    // 3 | Get Front Function
    // Time Complexity: Constant - Θ(1)
    int getFront() {
        if (this->isEmpty()) { // Θ(1)
            std::cout << "Queue is empty" << std::endl;
            return -1;
        }
        return this->array[this->front]; // Θ(1)
    }

    // 4 | Is Empty Function
    // Time Complexity: Constant - Θ(1)
    bool isEmpty() {
        return this->count == 0; // Θ(1)
    }

    // 5 | Is Full Function
    // Time Complexity: Constant - Θ(1)
    bool isFull() {
        return this->count == this->capacity; // Θ(1)
    }
};

int main()
{
    CircularQueue cq(5);

    cq.enqueue(10);

    std::cout << "Dequeued: " << cq.dequeue() << std::endl;
    
    std::cout << "Is Empty: " << cq.isEmpty() << std::endl;
    
    std::cout << "Is Full: " << cq.isFull() << std::endl;

    std::cout << "Get Front: " << cq.getFront() << std::endl;

    return 0;
}