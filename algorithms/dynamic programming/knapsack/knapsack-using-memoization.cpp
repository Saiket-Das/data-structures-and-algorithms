#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int dp[N][N];

int knapsack (int n, int s, int v[], int w[]) {
    if (n == 0 || s == 0) return 0;

    if (dp[n][s] != -1) return dp[n][s];

    if (w[n-1] <= s) {
        int option1 = knapsack(n-1, s-w[n-1], v, w) + v[n-1];
        int option2 = knapsack(n-1, s, v, w);
        return dp[n][s] = max(option1, option2);
    }
    else {
        return dp[n][s] = knapsack(n-1, s, v, w);
    }
}

int main () {     // Time Complexity - O(n*s)

    // Knapsack using Memoization

    int n;
    cin >> n;

    int value[n], weight[n];
    for (int i = 0; i < n; i++) {
        cin >> value[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    int w;     // Bag's weight
    cin >> w;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, w, value, weight) << endl;;

    return 0;
}