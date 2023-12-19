#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


bool isPalindrome(Node *&head, Node *&tail) {
        Node* front = head;
        Node* back = tail;

        while (front != NULL && back != NULL) {
            if (front->val != back->val) {
                return false;
            }
            front = front->next;
            back = back->prev;
        }
        return true;
        
    }
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    if (isPalindrome(head, tail)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}