#include <iostream>
using namespace std;

int main() {
    int marks[6];
    int sum = 0;

    cout << "Enter marks of 6 subjects: ";
    for (int i = 0; i < 6; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    float avg = sum / 6.0;
    cout << "Average = " << avg << endl;

    if (avg > 90)
        cout << "Grade: A+" << endl;
    else if (avg > 80)
        cout << "Grade: A" << endl;
    else if (avg > 70)
        cout << "Grade: B" << endl;
    else if (avg > 60)
        cout << "Grade: C" << endl;
    else if (avg > 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}

