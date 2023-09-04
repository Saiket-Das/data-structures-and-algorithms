#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int parentSize[N];

class Edge {
    public:
        int u, v, w;
        Edge (int u, int v, int w) {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

bool cmp (Edge a, Edge b) {
    return (a.w < b.w);
}

void dsu_set (int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsu_find (int node) {
    while (parent[node] != -1) {
        node = parent[node];
    }
    return node;
}

int mx = 0;
void dsu_union (int a, int b) {
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (leaderA != leaderB) {
        if (parentSize[leaderA] > parentSize[leaderB]) {
            // A Leader
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
            mx = max(mx, parentSize[leaderA]);
        }
        else {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
            mx = max(mx, parentSize[leaderB]);
        }
    }
}

int main () {

    // Building
    // Problem Link: https://www.hackerrank.com/contests/assignment-04-a-introduction-to-algorithms-a-batch-03/challenges/building-3-1

    int n, e;
    cin >> n >> e;

    vector<Edge> vec;
    vector<Edge> ans;

    dsu_set(n);

    while (e--) {
        int u, v, w;
        cin >> u >> v >> w;

        vec.push_back(Edge(u, v, w));
    }

    sort(vec.begin(), vec.end(), cmp);
    
    for (Edge val : vec) {
        int u = val.u;
        int v = val.v;
        int w = val.w;
        int leaderA = dsu_find(u);
        int leaderB = dsu_find(v);

        if (leaderA == leaderB) continue;
        
        ans.push_back(val);
        dsu_union(u, v);
    }

    long long answer = 0;
    for (Edge val : ans) {
        answer += (long long)(val.w);
    }

    if (ans.size() == n-1) {
        cout << answer << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}