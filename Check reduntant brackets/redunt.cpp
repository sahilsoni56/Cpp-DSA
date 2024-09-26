#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkReduncy(string str) {
    stack<char> st;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '/' || ch == '-' || ch == '*') {
            st.push(str[i]);
        } else if (ch == ')') {
            int oprtorCOunt = 0;
            while (!st.empty() && st.top() != '(') {
                char temp = st.top();
                if (temp == '+' || temp == '/' || temp == '-' || temp == '*') {
                    oprtorCOunt++;
                }
                st.pop();
            }
            st.pop();
            if (oprtorCOunt == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string str = "((a+b)+(c+d)))";  // Missing semicolon fixed
    bool answer = checkReduncy(str);
    if (answer == true) {
        cout << "Redundant brackets" << endl;
    } else {
        cout << "No redundant brackets" << endl;
    }
    return 0;
}
