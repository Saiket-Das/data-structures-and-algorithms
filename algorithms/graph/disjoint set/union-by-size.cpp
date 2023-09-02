#include<bits/stdc++.h>
using namespace std;

int parent[1000];
int parentSize[1000];

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

void dsu_union_by_size (int a, int b) {
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (leaderA != leaderB) {
        if (parentSize[leaderA] > parentSize[leaderB]) {
            // A Leader
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

int main () {

    // Union by Size

    int n, e;
    cin >> n >> e;
    
    dsu_set(n);

    while (e--) {
        int a, b;
        cin >> a >> b;

        dsu_union_by_size(a, b);
    }

    cout << dsu_find(5);

    return 0;
}