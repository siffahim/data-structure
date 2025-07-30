#include <bits/stdc++.h>
using namespace std;

int main(){
    //vector<int> v //type 1;
    //vector<int> v(5) //type 2;
    //vector<int> v(5, -1) //type 3;
    // vector<int> v2(4, -1);
    // vector<int> v(v2) //type 4;
    //vector<int> v = {1, 2, 3, 4, 5} // type 5;
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5);
    cout << v[3] << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    cout << v.size() << endl;
    return 0;
}