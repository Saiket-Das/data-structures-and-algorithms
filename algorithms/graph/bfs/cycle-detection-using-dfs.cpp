#include<bits/stdc++.h>
using namespace std;


const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];


bool dfs (int u, int p = -1) {     // Using DFS

    bool cycleExists = false;
    visited[u] = true;

    for (int v: adj[u]) {
        if (v == p) continue;
        if (visited[v] == true) return true;

        cycleExists = cycleExists | dfs(v, u);
    }
    return cycleExists;
}

int main () {

    // Cycle Detection

    int m, n;     // m = Vertex & n = Edge
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isCycle = false;

    for (int i = 1; i <=m; i++) {     // Checking individual node
        if(visited[i]) continue;

        isCycle |= dfs(i);
    }

    if (dfs(1)) {
        cout << "Cycle detected!" << endl;
    }
    else {
        cout << "No cycle detected!" << endl;
    }
    
    return 0;
}