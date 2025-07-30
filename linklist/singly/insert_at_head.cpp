#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head,Node* &tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void print_linklist(Node* head) {
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(50);
    Node *tail = new Node(75);

    head->next = a;
    a->next = tail;

    insert_at_head(head,tail, 100);
    print_linklist(head);

    return 0;
}
