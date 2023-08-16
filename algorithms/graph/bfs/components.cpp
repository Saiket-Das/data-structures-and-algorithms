#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+3;
vector<int> adj[N];
bool visited[N];
int counter = 1;

void dfs (int u) {
    visited[u] = true;
    counter++;

    for (int v: adj[u]) {
        if (visited[v] == true) continue;
        dfs(v);
    }
}

int main () {

    // Components
    // Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-03/challenges/components-4

    int n, e;     // n = Node & e = Edges
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> no_of_nodes;

    for (int i = 0; i <= 1000; i++) {
        counter = 0;

        if (visited[i] == true) continue;
        dfs(i);     // Count number of nodes in each component

        no_of_nodes.push_back(counter);
    }

    sort(no_of_nodes.begin(), no_of_nodes.end());    // Sort the array / vector (no_of_nodes)

    for (int v: no_of_nodes) {
        if (v == 1) continue;
        cout << v << " ";
    }

    return 0;
}