#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
bool checkEqual(myStack& s, myQueue& q) {
    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            return false;
        }
        s.pop();
        q.pop();
    }
    return s.empty() && q.empty();
}
int main(){
    int N, M;
    cin >> N >> M;

    myStack s;
    myQueue q;

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