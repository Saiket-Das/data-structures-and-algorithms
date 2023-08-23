#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void bfs (int u) {     // (Time complexity - O(2e)) e = Edge
    queue<int> q;
    q.push(u);
    visited[u] = true;
    level[u] = 0;
    parent[u] = -1;

    while (!q.empty()) {
        int temp = q.front();
        q.pop();     // Every node will be visited 2 times (Time complexity - O(e))

        for (int v: adj[temp]) {     // Time complexity - O(n)
            if (visited[v] == true) continue;

            q.push(v);
            visited[v] = true;
            level[v] = level[temp] + 1;
            parent[v] = temp;     // Save the parent node for every node
        }
    }
}


// (Time complexity - O(n+e)
int main () {

    // Shortest Path using BFS

    int n, e;     // n = Node & e = Edge
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s, d;     // s = Source & d = Destination
    cin >> s >> d;

    // BFS (Time complexity - O(n+e))
    bfs(s);

    cout << s << " to " << d << " distance - "<< level[d] << endl;

    // Path Finding (Time complexity - O(n))
    vector<int> path;
    int curr = d;

    while (curr != -1) {
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(), path.end());

    cout << s << " to " << d << " path - ";
    for (int v: path) {
        cout << v << " ";
    }

    /*
    // Print parent's node of all node
    for (int i = 1; i <= n; i++) {  
        cout << "Parent of " << i << ": "<< parent[i] << endl;
    }
    */

    return 0;
}