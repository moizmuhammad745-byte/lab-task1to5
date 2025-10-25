#include <iostream>
#include <stack>
using namespace std;

void studentInfo() {
    cout << "Name: Moiz" << endl;
    cout << "Reg No: 078" << endl;
}

// Manual check for alphanumeric
bool isAlphaNum(char c) {
    return ( (c >= 'a' && c <= 'z') || 
             (c >= 'A' && c <= 'Z') || 
             (c >= '0' && c <= '9') );
}

// Precedence function
int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

// Convert Infix to Postfix
string infixToPostfix(string exp) {
    stack<char> st;
    string result = "";

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];

        if (isAlphaNum(c)) {
            result += c; // add operands directly
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // pop '('
        }
        else { // operator
            while (!st.empty() && precedence(c) <= precedence(st.top()) && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

int main() {
    studentInfo();

    string exp;
    cout << "\nEnter infix expression (no spaces): ";
    cin >> exp;

    cout << "Postfix Expression: " << infixToPostfix(exp) << endl;
    return 0;
}

