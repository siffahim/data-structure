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

class MyQueue{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;

        void push(int val){
            sz++;
            Node *newnode = new Node(val);
            if(head == NULL){
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            tail = newnode;
        }

        void pop(){
            sz--;
            Node *deletenode = head;
            head = head->next;
            delete deletenode;
            if(head == NULL){
                tail = NULL;
            }
        }

        int front(){
            return head->val;
        }

        int back(){
            return tail->val;
        }

        int size(){
            return sz;
        }

        int empty(){
            return head == NULL;
        }
};   

int main(){
    MyQueue q;

    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        q.push(x);
    }

    //cout << q.front() << " " << q.back() << " " << q.size();
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}