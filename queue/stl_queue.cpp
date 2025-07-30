#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        q.push(x);
    }


    // if(!q.empty())
    //     cout << q.front();
    // if(!q.empty())
    //     q.pop();

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}