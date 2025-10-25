#include <iostream>
using namespace std;

int main() {
    cout << "Name: Moiz\nReg No: 078\nSection: B\n\n";

    string items[20];
    int count = 78 % 5;  // 78 % 5 = 3
    cout << "Enter " << count << " items:\n";
    for (int i = 0; i < count; i++) {
        cout << "Item " << i+1 << ": ";
        cin >> items[i];
    }

    cout << "\nShopping List:\n";
    for (int i = 0; i < count; i++)
        cout << items[i] << endl;

    int more;
    cout << "\nHow many more items? ";
    cin >> more;
    for (int i = 0; i < more; i++) {
        cout << "Item " << count + 1 << ": ";
        cin >> items[count];
        count++;
    }

    cout << "\nFinal Shopping List:\n";
    for (int i = 0; i < count; i++)
        cout << items[i] << endl;

    return 0;
}

