#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9+5;

int main () {

    // Floyd Warshall Algorithm

    int n, e;
    cin >> n >> e;

    int dis[n+1][n+1];

    // Distance initialize 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dis[i][j] = INF;
            if (i == j) {
                dis[i][j] = 0;
            }
        }
    }

    while (e--) {
        int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = w;
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dis[i][j] > (dis[i][k] + dis[k][j])) {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    cout << endl;
    // Print matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (dis[i][j] == INF) {
                cout << "X" << " ";
            }
            else {
                cout << dis[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}