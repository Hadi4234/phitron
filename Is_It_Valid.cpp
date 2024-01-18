#include <iostream>
#include <stack>
using namespace std;

string isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '0') {
            if (!st.empty() && st.top() == '1') {
                st.pop();
            } else {
                st.push(c);
            }
        } else if (c == '1') {
            if (!st.empty() && st.top() == '0') {
                st.pop();
            } else {
                st.push(c);
            }
        }
    }

    return st.empty() ? "YES" : "NO";
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        string s;
        getline(cin, s);
        string result = isValid(s);
        cout << result << endl;
    }

    return 0;
}
