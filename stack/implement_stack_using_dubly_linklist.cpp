#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node *prev;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack{
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
            newnode->prev = tail;
            tail = newnode;
        }

        void pop(){
            sz--;
            Node *deletenode = tail;
            tail = tail->prev;
            delete deletenode;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
        }

        int top(){
            return tail->val;
        }

        int size(){
            return sz;
        }

        bool empty(){
            // if(head == NULL)
            //     return true;
            // else
            //     return false;
            return head == NULL;
        }
};

int main(){
    MyStack st;
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        st.push(x);
    }

    //cout << st.size() << " SIZE" << endl;
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    

    return 0;
}