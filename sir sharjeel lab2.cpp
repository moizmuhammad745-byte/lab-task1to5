#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int search;
    cout << "Enter number to search: ";
    cin >> search;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = true;
            break;
        }
    }

    if (found)
        cout << search << " found in array!" << endl;
    else
        cout << search << " not found in array!" << endl;

    return 0;
}

