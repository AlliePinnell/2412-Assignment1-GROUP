#include <iostream>

int main()
{
    CircularQueue circularqueue = new CircularQueue();
    std::cout << "Hello World!\n";
}

class CircularQueue {
private:
    int front, rear, capacity;
    int* array;
    int count;

    void countItems() {
        for (int i = 0; i < sizeof(this->array); i++)
            this->count++;
    }

public:
    // Constructor and other necessary declarations 
    CircularQueue() {
        this->countItems();
    }

    void enqueue(int element) {
        // Implementation of enqueue operation 
        this->array[this->count % sizeof(this->array)] = element;
        this->count++;
    }

    int dequeue() {
        int temp = this->array[this->count];


        // Implementation of dequeue operation 
        for (int i = sizeof(this->array); i > sizeof(this->array); i--) {
            this->array[i - 1] = this->array[i];
        }
        if (this->count > sizeof(this->array))
            this->array[sizeof(this->array) - 1]  //Before Front, 
            = this->array[this->count % sizeof(this->array)]; //Shiftrs to end
        this->count--;

        return temp;

    }

    int getFront() {
        // Implementation of front operation 
        return this->array[this->count % sizeof(this->array)];
    }

    bool isEmpty() {
        // Implementation of isEmpty operation 
        return sizeof(this->array) == NULL;
    }

    bool isFull() {
        int counter = 0;
        // Implementation of isFull operation 
        for (int l = 0; l < sizeof(this->array); l++) {
            counter++;
        }

        return counter;
    }
};