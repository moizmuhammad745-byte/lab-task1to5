#include <iostream>
using namespace std;

int main() {
    string name = "Moiz";
    int regNo = 78;

    cout << "Name: " << name << endl;
    cout << "Reg No: " << regNo << endl;

    int numItems = regNo % 5;
    if (numItems == 0) numItems = 3;  // At least 3 items

    string items[50];
    int qty[50];
    int count = 0;

    cout << "\nEnter " << numItems << " items:\n";
    for (int i = 0; i < numItems; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> items[count];
        cout << "Quantity: ";
        cin >> qty[count];
        count++;
    }

    char choice;
    do {
        cout << "Add more? (y/n): ";
        cin >> choice;
        if (choice == 'y') {
            cout << "Item: ";
            cin >> items[count];
            cout << "Quantity: ";
            cin >> qty[count];
            count++;
        }
    } while (choice == 'y');

    cout << "\nShopping List:\n";
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". " << items[i] << " x" << qty[i] << "\n";
    }
    return 0;
}

