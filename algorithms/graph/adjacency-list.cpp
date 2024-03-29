#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
vector<pair<int,int> > adj[N];

int main () {

    // Adjacency List Implementation

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

    	adj[u].push_back({v, w});
        // adj[v].push_back(u);     // directed graph
    }

    cout << endl;
    for (int i = 1; i <= n; i++) {

        cout << "List " << i << ": ";
        for (auto j: adj[i]) {
            cout << "(" << j.first << ", " << j.second << "), ";
        }
        cout << endl;
    }

    return 0;
}