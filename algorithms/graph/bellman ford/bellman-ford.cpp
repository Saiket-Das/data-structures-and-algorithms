#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9+5;

class Edge {
    public:
        int u;
        int v;
        int w;
    Edge (int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main () {

    // Bellman Ford Algorithm

    int n, e;
    cin >> n >> e;

    vector<Edge> adj;
    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
         
        Edge ed(u, v, w);
        adj.push_back(ed);
    }

    int dis[n+1];
    for (int i = 1; i <= n; i++) {
        dis[i] = INF;
    }
    dis[1] = 0;

    for (int i = 1; i <= n-1; i++) {
        for (int j = 0; j < adj.size(); j++) {
            Edge ed = adj[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if ((dis[u] + w) < dis[v]) {
                dis[v] = dis[u] + w;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": " << dis[i] << endl;
    }

    return 0;
}