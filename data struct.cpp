#include <iostream>
using namespace std;

int main() {
    cout << "Student Name: Moiz\nReg No: 78\n";

    int marks[6];
    int sum = 0;

    cout << "Enter marks of 6 subjects: \n";
    for (int i = 0; i < 6; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    float average = sum / 6.0;

    cout << "\nAverage Marks = " << average << endl;
    cout << "Grade: ";

    if (average > 90)
        cout << "A+";
    else if (average > 80)
        cout << "A";
    else if (average > 70)
        cout << "B";
    else if (average > 60)
        cout << "C";
    else if (average > 50)
        cout << "D";
    else
        cout << "F";

    return 0;
}

