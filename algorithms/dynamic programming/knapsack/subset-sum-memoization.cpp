#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int dp[N][N];

bool knapsack (int n, int set[], int sum) {
    // Recursion base case
    if (n == 0) {
        if (sum == 0) return true;
        else          return false;
    }

    // Memoization base case
    if (dp[n][sum] != -1) {
        return dp[n][sum];
    }

    if (set[n-1] <= sum) {
        bool option1 = knapsack(n-1, set, sum - set[n-1]);
        bool option2 = knapsack(n-1, set, sum);
        return dp[n][sum] = (option1 || option2);
    }
    else {
        return dp[n][sum] = knapsack(n-1, set, sum);
    }
}

int main () {     // Time Complexity - O(n*s)     // n = Array size & s = Sum value

    // Subset Sum Top Down

    int n;
    cin >> n;

    int set[n];
    for (int i = 0; i < n; i++) {
        cin >> set[i];
    }

    int sum;
    cin >> sum;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            dp[i][j] = -1;
        }
    }

    if (knapsack(n, set, sum) == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}