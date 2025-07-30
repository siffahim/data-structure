#include <bits/stdc++.h>
using namespace std;

class MyStack{
    public:
        vector<int> v;
        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
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