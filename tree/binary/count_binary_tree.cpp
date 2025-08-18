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

int input_tree(){
    int val;
    cin >> val;
    Node *root;
    if(val == -1) 
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while(!q.empty()){
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
}





int main(){

    
    return 0;
}