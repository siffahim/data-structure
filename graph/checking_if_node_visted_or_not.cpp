#include <bits/stdc++.h>
using namespace std;
vector<int> adj_lits[1005];
bool vis[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        int per = q.front();
        q.pop();

        //cout << per << " ";

        for(int child : adj_lits[per]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        };
    }
}

int main(){
    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b;
        cin >> a >> b;

        adj_lits[a].push_back(b);
        adj_lits[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int src, dst;
    cin >> src >> dst;

    bfs(src);
    if(vis[dst])
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

// 7 5
// 0 1
// 1 3
// 3 2
// 4 6
// 3 5
// 0
// 4