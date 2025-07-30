#include <bits/stdc++.h>
using namespace std;

int main(){
    //list<int> l;
    //list<int> l(10);
    //cout << l.size();
    // list<int> l(10, 5);

    // for (list<int>:: iterator it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    //list<int> l1 = {1, 2, 3, 4, 5};
    //list<int> l2(l1);
    //array
    // int a[] = {10, 20, 30};
    // list<int> l2(a, a+3);

    //vector
    vector<int> v = {40, 50, 60};
    list<int> l2(v.begin(), v.end());

    for(int val : l2){
        cout << val << endl;
    }

    return 0;
}