
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

void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


int find_diff(Node *head){
    if (!head) {
        return 0;
    }
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    
    Node* current = head;
    while (current != NULL) {
        minVal = min(minVal, current->val);
        maxVal = max(maxVal, current->val);
        current = current->next;
    }

    return maxVal - minVal;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head,tail,val);
    }
    int result = find_diff(head) ;
    cout<<result<<endl;
}