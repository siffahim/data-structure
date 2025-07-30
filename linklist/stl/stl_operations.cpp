#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10, 30, 20, 50, 60, 60, 50, 10,20};

    //l.remove(10); remove all 10 from the list

    //l.sort();
    //l.sort(greater<int>());

    //l.unique();

    l.reverse();

    for(int val : l){
        cout << val << endl;
    }

    return 0;
}