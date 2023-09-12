#include<bits/stdc++.h>
using namespace std;\

const int N = 1e3+5;
int dp[N][N];

int knapsack (int n, int w, int weight[], int value[]) {
    if (n == 0 || w == 0) return 0;

    if (dp[n][w] != -1) return dp[n][w];

    if (weight[n-1] <= w) {
        int option1 = knapsack(n-1, w - weight[n-1], weight, value) + value[n-1];
        int option2 = knapsack(n-1, w, weight, value);
        return dp[n][w] = max(option1, option2);
    }
    else {
        return dp[n][w] = knapsack(n-1, w, weight, value);
    }
}

int main () {

    // Adventure
    // Problem Link: https://www.hackerrank.com/contests/assignment-04-a-introduction-to-algorithms-a-batch-03-1/challenges/adventure-1

    int t;     // Number of test cases
    cin >> t;

    while (t--) {
        int n, w;     // n = Number of items & w = Total weight of bagpack
        cin >> n >> w;

        int value[n], weight[n];
        for (int i = 0; i < n; i++) {     // Wight of all item's input
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++) {     // Value of all item's input
            cin >> value[i];
        }

        for (int i = 0; i <= n; i++) {     // Value of all item's input
            for (int j = 0; j <= w; j++) {
                dp[i][j] = -1;
            }
        }

        cout << knapsack(n, w, weight, value) << endl;
    }

    return 0;
}