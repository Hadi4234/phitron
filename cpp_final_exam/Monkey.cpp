#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string line;
    while (getline(cin, line)) {
        string sortedLine;
        for (char c = 'a'; c <= 'z'; ++c) {
            for (char ch : line) {
                if (ch == c) {
                    sortedLine += ch;
                }
            }
        }
        cout << sortedLine << endl;
    }
    return 0;
}
