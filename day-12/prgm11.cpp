// Queue using array
#include<iostream>
using namespace std;
#define SIZE 100

class Queue {
    int arr[SIZE], front, rear;
public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int val) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = val;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    int peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << "Front element: " << q.peek() << endl;
    q.dequeue();
    cout << "Front after dequeue: " << q.peek() << endl;
    return 0;
}
