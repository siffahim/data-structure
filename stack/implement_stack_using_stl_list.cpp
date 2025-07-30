#include <bits/stdc++.h>
using namespace std;

class MyStack{
    public:
        list<int> l;
        void push(int val){
            l.push_back(val);
        }

        void pop(){
            l.pop_back();
        }

        int top(){
            return l.back();
        }

        int size(){
            return l.size();
        }

        bool empty(){
            return l.empty();
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

    
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}