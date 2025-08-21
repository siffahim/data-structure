#include <bits/stdc++.h>
using namespace std;

int main(){
    // pair<string, int> p;
     //p = make_pair("Hi", 2);
    // p = {"Hello", 5};

    // cout << p.first << endl;
    // cout << p.second;
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    int i = 0;
    while(i<n){
        cin >> v[i].first >> v[i].second;
        i++;
    }

    for(pair<int, int> p : v){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}