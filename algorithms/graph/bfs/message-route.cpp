#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
vector<int> visited(N, false);
int level[N];
vector<int> parent(N, -1);

void bfs (int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v: adj[u]){
            if (visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            parent[v] = u;
            level[v] = level[u] + 1;
        }
    }
}

int main () {

    // Message Route
    // Problem Link: https://cses.fi/problemset/task/1667

    int n, m;     // n = Node & m = Edge
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);


    if (level[n] == 0) {
         
        cout << "IMPOSSIBLE" << endl;
    }
    else {
        cout << level[n] << endl;     // Output

        int curr = n;
        vector<int> path;
        while (curr != -1) {
            path.push_back(curr);
            curr = parent[curr];
        }
        
        reverse(path.begin(), path.end());

        for (auto p:path) {
            cout << p << " ";     // Output
        }
    }

    return 0;
}