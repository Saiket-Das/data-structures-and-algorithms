#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+3;
vector<int> adj[N];

int main () {

    // Kamal's Neighbourhood - I
    // Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-03/challenges/kamals-neighbourhood-i

    int n, e;     // n = Node & e = Edges
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int k;     // Number of Kamal's house
    cin >> k;

    cout << adj[k].size() << endl;

    return 0;
}