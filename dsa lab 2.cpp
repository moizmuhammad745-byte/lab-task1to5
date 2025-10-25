#include <iostream>
using namespace std;

int main() {
    string name = "Moiz";
    int regNo = 78;

    cout << "Name: " << name << endl;
    cout << "Reg No: " << regNo << endl;

    int N = (regNo % 10) + 3; // Number of students (78 % 10 = 8 ? 8+3 = 11)

    string queue[50];
    cout << "\nEnter " << N << " student names:\n";
    for (int i = 0; i < N; i++) cin >> queue[i];

    cout << "\nInitial Queue:\n";
    for (int i = 0; i < N; i++) cout << queue[i] << " ";

    // Remove first student (shift left)
    for (int i = 0; i < N - 1; i++) queue[i] = queue[i + 1];
    N--;

    cout << "\nUpdated Queue:\n";
    for (int i = 0; i < N; i++) cout << queue[i] << " ";
    cout << "\n";

    return 0;
}

