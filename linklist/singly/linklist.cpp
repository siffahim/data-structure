#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* p;
};

int main(){
    Node a, b, c;

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.p = &b;
    b.p = &c;
    c.p = NULL;

    cout << "B: " << &b << endl;

    cout << a.val << " " << (*a.p).val << " " << a.p->val << endl;

    return 0;
}