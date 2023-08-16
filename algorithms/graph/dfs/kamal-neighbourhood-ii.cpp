#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+3;
vector<int> adj[N];
bool visited[N];

int bfs(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;

    int count = 0;

    while (!q.empty()) {
        int temp = q.front();
        q.pop();

        for (int v: adj[temp]) {
            if (visited[v]) continue;
            count++;     // Count the number of houses that Kamal can go 
            q.push(v);
            visited[v] = true;
        }
    }
    return count;
}

int main () {

    // Kamal's Neighbourhood - I
    // Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-03/challenges/kamals-neighbourhood-ii

    int n, e;     // n = Node & e = Edges
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    int k;     // Number of Kamal's house
    cin >> k;

    int ans = bfs(k);
    cout << ans << endl;

    return 0;
}