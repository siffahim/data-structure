#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;

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