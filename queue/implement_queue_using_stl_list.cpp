#include <bits/stdc++.h>
using namespace std;


class MyQueue{
    public:
        list<int> l;

        void push(int val){
            l.push_back(val);
        }

        void pop(){
            l.pop_front();
        }

        int front(){
            return l.front();
        }

        int back(){
            return l.back();
        }

        int size(){
            return l.size();
        }

        int empty(){
            return l.empty();
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