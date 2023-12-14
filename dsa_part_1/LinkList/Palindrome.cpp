#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

Node* createDoublyLinkedList(int values[], int size) {
    Node* head = new Node(values[0]);
    Node* current = head;

    for (int i = 1; i < size; ++i) {
        if (values[i] == -1) {
            break;
        }
        Node* new_node = new Node(values[i]);
        current->next = new_node;
        new_node->prev = current;
        current = new_node;
    }

    return head;
}

string isPalindrome(Node* head) {
    Node* start = head;
    Node* end = head;

    while (end->next != nullptr) {
        end = end->next;
    }

    while (start != end && start->prev != end) {
        if (start->data != end->data) {
            return "NO";
        }
        start = start->next;
        end = end->prev;
    }

    return "YES";
}

int main() {
    const int maxSize = 1000000;
    int values[maxSize];
    int value, idx = 0;

    while (true) {
        cin >> value;
        if (value == -1) {
            break;
        }
        values[idx++] = value;
    }

    Node* head = createDoublyLinkedList(values, idx);

    string result = isPalindrome(head);
    cout << result << endl;

    return 0;
}
