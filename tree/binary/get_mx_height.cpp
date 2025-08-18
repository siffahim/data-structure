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

int max_height(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

int main(){
    Node *root = input_tree();
    cout << max_height(root);

    return 0;
}