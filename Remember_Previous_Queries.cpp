#include <iostream>
#include <list>

using namespace std;


void print_normal(linkedList){
    cout << "L -> ";
        for (int val : linkedList) {
            cout << val << " ";
        }
        cout << endl;
}
void print_reverse(linkedList){
       cout << "R -> ";
       linkedList.reverse();
         for (int val : linkedList) {
            cout << val << " ";
        }
        cout << endl;
}
int main() {
    int Q;
    cin >> Q;

    list<int> linkedList;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            linkedList.push_front(V);
        } else if (X == 1) {
            linkedList.push_back(V);
        } else if (X == 2) {
            int index = 0;
            for (auto it = linkedList.begin(); it != linkedList.end(); ++it, ++index) {
                if (index == V) {
                    linkedList.erase(it);
                    break;
                }
            }
        }

        print_normal(linkedList);
        print_reverse(linkedList);
    }

    return 0;
}