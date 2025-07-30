#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};


void insert_at_any_pos(Node* &head, int idx, int val){
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++){
        temp = temp->next;
        // corner case
        // if temp == NULL
        // return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


void print_linklist(Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 2, 200);
    print_linklist(head);

    return 0;
}