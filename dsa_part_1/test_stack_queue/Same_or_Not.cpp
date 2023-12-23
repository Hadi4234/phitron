#include <bits/stdc++.h>

using namespace std;

bool checkEqual(stack<int>& s, queue<int>& q) {
    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            return false;
        }
        s.pop();
        q.pop();
    }
    return s.empty() && q.empty();
}

int main() {
    int N, M;
    cin >> N >> M;

    stack<int> s;
    queue<int> q;

    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < M; ++i) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (checkEqual(s, q)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
