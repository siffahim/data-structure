#include <bits/stdc++.h>
using namespace std;
vector<int> adj_lits[1005];
bool vis[1005];
int level[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int per = q.front();
        q.pop();

        //cout << per << " ";

        for(int child : adj_lits[per]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[per] + 1;
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
    memset(level, -1, sizeof(level));
    int src, dst;
    cin >> src >> dst;

    bfs(src);

    // for (int i = 0; i < n; i++){
    //     cout << i << "--> " << level[i] << endl;
    // }

    cout << level[dst] << endl;

    return 0;
}