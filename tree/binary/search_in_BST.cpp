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
// 18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1 
bool search(Node* root, int val){
    if(root == NULL){
        return false;
    }
    if(root->val == val){
        return true;
    }
    if(root->val > val){
        return search(root->left, val);
    }else{
        return search(root->right, val);
    }
}

int main(){

    
    return 0;
} 