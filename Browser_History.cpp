#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> webList;
    string val;

    // Reading values for the doubly linked list
    while (true) {
        cin >> val;
        if (val == "end") {
            break;
        }
        webList.push_back(val);
    }

    int Q;
    cin >> Q;
    cin.ignore(); // Clear input buffer

    auto current = webList.begin(); // Start at the head

    // Processing queries
    while (Q--) {
        string command;
        getline(cin, command);

        if (command.substr(0, 5) == "visit") {
            string address = command.substr(6);
            auto it = find(webList.begin(), webList.end(), address);
            if (it != webList.end()) {
                current = it;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            if (++current != webList.end()) {
                cout << *current << endl;
            } else {
                --current; // Don't move from the current position
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (current != webList.begin()) {
                --current;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else {
            cout << "Invalid Command" << endl;
        }
    }

    return 0;
}
