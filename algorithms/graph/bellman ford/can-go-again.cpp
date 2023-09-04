#include<bits/stdc++.h>
using namespace std;

const long long int INF = 1e18 + 1000000000;

class Edge {
    public:
        int u;
        int v;
        long long w;
    Edge (int u, int v, long long w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main () {

    // Can Go Again?
    // Problem Link: https://www.hackerrank.com/contests/assignment-04-a-introduction-to-algorithms-a-batch-03/challenges/can-go-again

    int n, e;
    cin >> n >> e;

    vector<Edge> adj;
    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
         
        Edge ed(u, v, w);
        adj.push_back(ed);
    }

    int sizeOfdis = 1e3 + 10;
    vector<long long int> dis(sizeOfdis +1);
    for (int i = 0; i <= n; i++) {
        dis[i] = INF;
    }

    int s;
    cin >> s;
    dis[s] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < adj.size(); j++) {
            Edge ed = adj[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if ((dis[u] + w) < dis[v] && (dis[u] != INF)) {
                dis[v] = dis[u] + w;
            }
        }
    }

    // Detect negative cycle
    bool cycle = false;
    for (int j = 0; j < adj.size(); j++) {
        Edge ed = adj[j];
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;
        if ((dis[u] + w) < dis[v] && dis[u] != INF) {
            cycle = true;
            break;
        }
    }

    int t;     // t = Number of test case
    cin >> t;

    while(t--) {
        int d;     // d = Destination
        cin >> d;

        if (!cycle) {
            if (dis[d] >= 1e18 + 10000007) {
                cout << "Not Possible" << endl;
            }
            else {
                cout << dis[d] << endl;
            }
        }
    }

    if (cycle) {
        cout << "Negative Cycle Detected" << endl;
    }

    return 0;
}