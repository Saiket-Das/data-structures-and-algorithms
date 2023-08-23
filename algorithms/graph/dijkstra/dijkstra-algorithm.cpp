#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
const int INF = 1e9+10;

typedef pair<int,int> pii;
vector<pii> adj[N];
vector<int> dist(N, INF);
vector<bool> visited(N);

void dijkstra (int s) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[s] = 0;
    pq.push({dist[s], s});

    while (!pq.empty()) {
        int u = pq.top().second;     // Node
        pq.pop();
        visited[u] = true;

        for (pii vpair: adj[u]) {
            int v = vpair.first;      // Node's value
            int w = vpair.second;     // Node's Weight

            if (visited[v] == true) continue;

            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main () {

    // Dijkstra Algorithm (Time complexity - O(n+e))

    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        // adj[v].push_back({u, w});
    }
    
    dijkstra(1);

    for (int i = 1; i <= n; i++) {
        cout << "Distance of node " << i << ": " << dist[i] << endl;
    }

    return 0;
}