#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+3;
vector<int> adj[N];

void bfs (int u, bool visited[], int level[]) {
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty()) {
        int temp = q.front();
        q.pop();

        for (auto &&v: adj[temp]) {
            if (visited[v]) continue;     // If node already visted then skip rest of the part

            q.push(v);
            visited[v] = true;
            level[v] = level[temp] + 1;     // Find level of node and push it in Level Array
        }
    }

}

int main () {

    // Distance
    // Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-03/challenges/distance-11-1/problem

    int n, e;     // n = Node & m = Edges
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int q;     // Number of queries
    cin  >> q;

    while (q--) {
        int level[N] = {0};
        bool visited[N] = {0};

        int s, d;      // s = Source & d = Distance
        cin >> s >> d;
        
        bfs(s, visited, level);     // Find the level of each value using BFS
        if (!visited[d]) {
            cout << -1 << endl;
        }
        else {
            cout << level[d] << endl;
        }
    }

    return 0;
}