#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparePairs(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<string, int>> pairs;
    for (int i = 0; i < n; ++i) {
        string s;
        int value;
        cin >> s >> value;
        pairs.push_back(make_pair(s, value));
    }
    sort(pairs.begin(), pairs.end(), comparePairs);

    for (const auto& pair : pairs) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
