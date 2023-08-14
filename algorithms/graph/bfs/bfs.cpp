#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs (int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty()) {
        // Pop a node from queue and inseert univisitef negihbors of that node
        int u = q.front();
        q.pop();

        cout <<  "Visiting node: " << u << endl;

        // Section 1 - A node is being processed
        for (int v: adj[u]) {

            // Section 2 - Child processing
            if (visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main () {

    // BFS Implementation

    int m, n;     // m = Vertex & n = Edge
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);

    cout << "*********************" << endl;
    for (int i = 1; i <= m; i++) {
        cout << "Level of " << i << ": " << level[i] << endl;
    }

    return 0;
}