#include <iostream>

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

void print_normal(Node* &head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node* &tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

    
void inser_at_position(Node* &head,Node* &tail,int idx, int val) {
    Node *newNode = new Node(val);
        if (head == NULL && idx == 0) {
            head = newNode;
            tail = newNode;
        } else if (idx == 0) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else {
            Node* current = head;
            int count = 0;

            while (current != NULL && count < idx - 1) {
                current = current->next;
                count++;
            }

            if (current == NULL) {
                cout << "Invalid" << endl;
                return;
            }

            newNode->next = current->next;
            if (current->next != NULL) {
                current->next->prev = newNode;
            }
            current->next = newNode;
            newNode->prev = current;

            if (newNode->next == NULL) {
                tail = newNode;
            }
        }
        print_normal(head);
        print_reverse(tail);
    }



int main() {
    int Q;
    cin >> Q;
     Node *head = NULL;
     Node *tail = NULL;

    while(Q--){
        int X, V;
        cin >> X >> V;
        inser_at_position(head,tail,X, V);
    }

    return 0;
}

