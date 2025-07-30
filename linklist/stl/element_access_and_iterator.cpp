#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {20, 30, 50, 60, 70};

    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << *next(l.begin(), 2) << endl;

    cout << *l.begin();

    return 0;
}