#include <iostream>
using namespace std;

// ===== Student Info =====
void studentInfo() {
    cout << "Name: Moiz" << endl;
    cout << "Reg No: 078" << endl;
}

// ===== Stack Implementation =====
class Stack {
private:
    int arr[100];
    int top;
public:
    Stack() { top = -1; }

    void push(int value) {
        if (top >= 99) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }

    bool isEmpty() { return top < 0; }
};

int main() {
    studentInfo();

    Stack s;
    int n, value;

    cout << "\nEnter number of elements: ";
    cin >> n;

    // Taking numbers from user
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> value;
        s.push(value);
    }

    cout << "\nEven numbers (popped from stack): ";
    int highest = -99999;  // very small initial value

    while (!s.isEmpty()) {
        int val = s.pop();
        if (val > highest) highest = val;
        if (val % 2 == 0) cout << val << " ";
    }

    cout << "\nHighest number: " << highest << endl;
    return 0;
}

