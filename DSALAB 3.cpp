#include <iostream>
#include <queue>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);   // Take whole line input

    stringstream ss(input);
    string word;
    int queueNo = 1;

    // Process each word separately
    while (ss >> word) {
        queue<char> q;   // Queue for single word

        // Insert characters into queue (old-style loop)
        for (int i = 0; i < word.length(); i++) {
            q.push(word[i]);
        }

        // Display the queue
        cout << "Q" << queueNo << " = ";
        while (!q.empty()) {
            cout << q.front();
            q.pop();
            if (!q.empty()) cout << " -> ";
        }
        cout << endl;

        queueNo++;
    }

    return 0;
}

