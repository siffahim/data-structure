#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10,20, 30, 40, 50,60};
    vector<int> v = {200, 300};

    //assign
    //list<int> l2;
    //l2 = l;
    //l2.assign(l.begin(), l.end());

    // l.push_back(100);
    // l.push_front(200);

    // l.pop_back();
    // l.pop_front();

    //l.insert(next(l.begin(), 2), 100);
    //l.insert(next(l.begin(), 2), v.begin(), v.end());

    //cout << *next(l.begin(), 1) << endl;


    //l.erase(next(l.begin(), 1));
    //l.erase(next(l.begin(), 1), next(l.begin(), 4));

    //replace(l.begin(), l.end(), 20, 100);

    auto it = find(l.begin(), l.end(), 20);
    if(it == l.end()){
        cout << "Not found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    for(int val : l){
        cout << val << endl;
    }

    return  
    
    
       0;
}