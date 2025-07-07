// Circular queue usinhg array
#include<iostream>
#define SIZE 5
using namespace std;

class CircularQueue {
    int arr[SIZE], front, rear;
public:
    CircularQueue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue Full\n";
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
    }

    void display() {
        if (front == -1) {
            cout << "Empty Queue\n";
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    q.enqueue(10); q.enqueue(20); q.enqueue(30); q.enqueue(40); q.enqueue(50);
    q.display();
    q.dequeue();
    q.enqueue(60);
    q.display();
    return 0;
}
