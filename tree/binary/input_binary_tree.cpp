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

Node* input_tree(){
    int val;
    cin >> val;
    Node *root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node *> q;
    if(root) q.push(root);

    while(!q.empty()){
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children push kora
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }

    return root;
}


void level_order(Node* root){
    if(root == NULL)
    {
        cout << "No Tree";
        return;
    }
    queue<Node *> q;
    q.push(root);

    while(!q.empty()){
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
}


int main(){
    Node *root = input_tree();
    level_order(root);

    return 0;
}