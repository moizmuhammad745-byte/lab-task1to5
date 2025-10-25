#include <iostream>
using namespace std;

#define SIZE 100

class Stack {
    int top;
    int arr[SIZE];

public:
    Stack() { top = -1; }

    void push(int x) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
        } else {
            cout << arr[top--] << " popped from stack\n";
        }
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements are:\n";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    
       
