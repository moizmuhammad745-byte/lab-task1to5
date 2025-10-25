int main() {
    CircularQueue q(3);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40); // resize
    q.enqueue(50);
    q.display();

    q.dequeue();
    q.dequeue();
    q.enqueue(60);
    q.enqueue(70);
    q.display();
}

