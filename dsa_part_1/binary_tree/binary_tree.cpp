#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node *input_tree(){
  int val;
  cin>>val;
  Node *root;
  if(val==-1)
    root=NULL;
  else {
    root = new Node(val);
  }
  queue<Node*>q;

}




int main(){
  Node *root = input_tree();
  level_order(root);
  return 0;
}
