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

//10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
//21

Node* input_tree(){
    int val;
    cin >> val;
    Node *root;
    if(val == -1){
        root == NULL;
    }else{
        root = new Node(val);
    }

    queue<Node *> q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){
        Node *f = q.front();
        q.pop();

        int l_value, r_value;
        cin >> l_value >> r_value;
        Node *l, *r;
        if(l_value == -1){
            l = NULL;
        }else{
            l = new Node(l_value);
        }
        if(r_value == -1){
            r = NULL;
        }else{
            r = new Node(r_value);
        }

        //connect
        f->left = l;
        f->right = r;

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    return root;
}

void level_order_traversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

void insert(Node* &root, int val){
    if(root == NULL)
        root = new Node(val);
    if(root->val > val){
        if(root->left == NULL){
            root->left = new Node(val);
        }
        else{
            insert(root->left, val);
        }
    }
    else{
        if(root->right == NULL){
            root->right = new Node(val);
        }
        else{
            insert(root->right, val);
        }
    }
}

int main(){
    Node *root = input_tree();
    int val;
    cin >> val;
    insert(root, val);
    level_order_traversal(root);

    return 0;
}