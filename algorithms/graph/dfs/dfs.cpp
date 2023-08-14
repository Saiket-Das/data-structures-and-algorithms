#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
vector<int> adj[N];

bool visited[N];

void dfs (int u) {
    // Section 1 - Actions just after entering a node
    visited[u] = true;

    cout << u << ", ";

    for (int v: adj[u]) {
        // Section 2 - Actions before entering a new neighbor or child
        if (visited[v] == true) continue; 
        dfs(v);

        // Section 3 - Actions after exiting a neighbor

    }

    // Section 4 - Actions before exiting node u(params)
}


int main () {

    // DFS Implementation

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    /*
    cout << endl;
    for (int i = 1; i <= n; i++) {

        cout << "List " << i << ": ";
        for (auto j: adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    */

    dfs(1);

    return 0;
}