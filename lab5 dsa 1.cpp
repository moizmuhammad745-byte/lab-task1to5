#include <iostream>
using namespace std;

class CircularQueue {
private:
    int queue[5];
    int front, rear, n;

public:
    CircularQueue() {
        n = 5;
        front = rear = -1;
    }

    void enqueue(int val) {
        if ((front == 0 && rear == n - 1) || (front == rear + 1)) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % n;
        queue[rear] = val;
        cout << "Inserted: " << val << endl;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << "Deleted: " << queue[front] << endl;

        if (front == rear) { // Queue becomes empty
            front = rear = -1;
        } else {
            front = (front + 1) % n;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue Empty!\n";
            return;
        }
        cout << "Queue Elements: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % n;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.dequeue();
    q.dequeue(); // should reset front & rear
    q.display();
}

