#include <iostream>
using namespace std;

int main() {
    int marks[10];
    cout << "Enter 10 marks: ";
    for (int i = 0; i < 10; i++) {
        cin >> marks[i];
    }

    int first = -1, second = -1;
    for (int i = 0; i < 10; i++) {
        if (marks[i] > first) {
            second = first;
            first = marks[i];
        } else if (marks[i] > second && marks[i] != first) {
            second = marks[i];
        }
    }

    cout << "1st highest marks: " << first << endl;
    cout << "2nd highest marks: " << second << endl;
    return 0;
}

