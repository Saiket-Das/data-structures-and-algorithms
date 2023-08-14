#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
vector<int> adj[N];

bool visited[N];
int depth[N];
int height[N];


void dfs (int u) {
    // Section 1 - Actions just after entering a node
    visited[u] = true;

    cout << u << ", ";

    for (int v: adj[u]) {
        // Section 2 - Actions before entering a new neighbor or child
        if (visited[v] == true) continue;

        depth[v] = depth[u] + 1;   // Find depth of a tree
        dfs(v);

        // Now we can determain the height of u
        // if (height[v]+1 > height[u]) {
        //     height[u] = height[v]+1;
        // }
        height[u] = max(height[u], height[v]+1);
    }
}

int main () {

    // Depth and Height of a Tree using DFS

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Depth of Node " << i << ": " << depth[i] << endl;
    }

    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Height of Node " << i << ": " << height[i] << endl;
    }

    return 0;
}