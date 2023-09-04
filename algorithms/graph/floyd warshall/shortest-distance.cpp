#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main () {

    // Shortest Distance
    // Problem Link: https://www.hackerrank.com/contests/assignment-04-a-introduction-to-algorithms-a-batch-03/challenges/shortest-distance-2

    int n, e;
    cin >> n >> e;

    long long dis[n+1][n+1];

    // Distance initialize 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                dis[i][j] = 0;
            }
            else {
                dis[i][j] = INF;
            }
        }
    }

    while (e--) {
        int a, b, w;
        cin >> a >> b >> w;

        if (dis[a][b] < w) continue;
        dis[a][b] = w;
    }

    // Floyd Warshall Algorithm
    for (int k =1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dis[i][j] = min(dis[i][j], (dis[i][k] + dis[k][j]));
            }
        }
    }


    int q;
    cin >> q;

    while (q--) {
        int x, y;     // x = source & y = destination
        cin >> x >> y;

        if (dis[x][y] == INF) {
            cout << -1 << endl;            // Answer
        }
        else {
            cout << dis[x][y] << endl;     // Answer
        }
    }
    
}