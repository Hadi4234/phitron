
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << pos << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void delete_from_position(Node*& head, int pos) {
    if (head == NULL) {
        return;
    }
    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    int count = 0;
    while (current != NULL && count < pos - 1) {
        current = current->next;
        count++;
    }
    if (current == NULL || current->next == NULL) {
        return;
    }
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}


int main()
{
    int Q;
    cin >> Q;

    Node* head = NULL;

    while (Q--) { 
        int X, V;
         cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, V);
        } else if (X == 1) {
            insert_at_tail(head, V);
        } else if (X == 2) {
           delete_from_position(head, V);
        }

        print_linked_list(head);
    }

    return 0;
}
