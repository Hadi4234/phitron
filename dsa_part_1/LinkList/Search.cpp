
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int find(Node* head, int val) {
    int index = 0;
    Node* current = head;
    while (current != NULL) {
        if (current->val == val) {
            return index;
        }
        current = current->next;
        index++;
    }

    return -1;
}

int main(){
    int T;
    cin>>T;
    while (T--)
    {
    Node* head = NULL;
    Node* tail = NULL;
    int val, X;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head,tail,val);
    }
    cin>>X;

    int result = find(head,X);
    cout<<result<<endl;
    }
 
}