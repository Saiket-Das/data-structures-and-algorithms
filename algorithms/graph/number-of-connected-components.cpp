#include<bits/stdc++.h>
using namespace std;


const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];


void dfs (int u) {

    visited[u] = true;
    for (int v: adj[u]) {
        if (visited[v]) continue;
        visited[v] = true;
        dfs(v); 
    }
}

void bfs (int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v: adj[u]) {
            if (visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
        }
    }
}

int main () {

    // Number of Connected Components

    int m, n;     // m = Vertex & n = Edge
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cc = 0;     // cc = Connected component

    for (int i = 1; i <= m; i++) {
        if (visited[i]) continue;
        
        // Answer will be same for both
        dfs(i);
        // bfs(i); 

        cc++;
    }

    cout << "Number of connected component: " << cc << endl;
    return 0;
}