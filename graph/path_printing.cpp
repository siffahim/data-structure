#include <bits/stdc++.h>
using namespace std;
vector<int> adj_lits[1005];
bool vis[1005];
int level[1005];
int parent[1005];

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
                parent[child] = per;
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
    memset(parent, -1, sizeof(parent));
    int src, dst;
    cin >> src >> dst;
    bfs(src);

    int node = dst;
    vector<int> path;
    while(node != -1){
        //cout << node << " ";
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());
    for(int x: path){
        cout << x << " ";
    }

    return 0;
}

// 7 7
// 0 1
// 1 3
// 3 2
// 1 4
// 3 5
// 2 5
// 5 6
// 0
// 6