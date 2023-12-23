#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    queue<string>q;

    while (T--) {
        int opt;
        cin >> opt;
        cin.ignore();

        if (opt == 0) {
            string name;
            cin >> name;
            q.push(name);
        } else if (opt == 1) {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
