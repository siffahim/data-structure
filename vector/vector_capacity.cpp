#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1, 2, 3,4,5};

    //resize the vector
    // v.resize(2);
    // v.resize(4);
    v.erase(v.begin() + 2, v.end());
    for(int i:v){
        cout << i << endl;
    }
    return 0;
}