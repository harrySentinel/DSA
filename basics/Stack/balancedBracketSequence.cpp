#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;

    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);  // Push opening brackets
        } else {
            if (s.empty()) return false; // No matching opening bracket

            char top = s.top();
            if ((ch == ')' && top == '(') || 
                (ch == '}' && top == '{') || 
                (ch == ']' && top == '[')) {
                s.pop();  // Matching pair found, remove from stack
            } else {
                return false; // Mismatched brackets
            }
        }
    }

    return s.empty(); // If stack is empty, it's balanced
}

int main() {
    string str;
    cout << "Enter a bracket sequence: ";
    cin >> str;

    if (isBalanced(str)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
