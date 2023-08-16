#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+3;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    level[u] = 0;

    while (!q.empty()) {
        int temp = q.front();
        q.pop();

        for (int v: adj[temp]) {
            if (visited[v] == true) continue;

            q.push(v);
            visited[v] = true;
            level[v] = level[temp] + 1;
        }
    }
}

int main () {

    // Know your level
    // Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-03/challenges/know-your-level

    int n, e;     // n = Node & m = Edges
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int lvl;
    cin >> lvl;

    if (lvl == 0) {
        cout << 0 << endl;
        return 0;
    }

    bfs(0);

    int max_level = 0;

    for (int i = 1; i <= N; i++) {
        max_level = max(max_level, level[i]);
    }

    if (lvl > max_level) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> shops;

    for (int i = 0; i <= N; i++) {
        if (level[i] == lvl) {
            shops.push_back(i);
        }
    }

    unique(shops.begin(), shops.end());     // Remove same duplicate shops that are available in same level

    for (int v: shops) {
        cout << v << " ";
    }

    return 0;
}