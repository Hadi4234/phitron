#include<bits/stdc++.h>
using namespace std;

bool isEmpty(string s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && c == '1' && st.top() == '0') {
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        string S;
        getline(cin, S);
       if (isEmpty(S)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }

    return 0;
}
