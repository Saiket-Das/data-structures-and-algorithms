#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int dp[N][N];

int knapsack (int n, int set[], int sum) {
    // Recursion base case
    if (n == 0) {
        if (sum == 0) return 1;
        else          return 0;
    }

    // Memoization base case
    if (dp[n][sum] != -1) {
        return dp[n][sum];
    }

    if (set[n-1] <= sum) {
        int option1 = knapsack(n-1, set, sum - set[n-1]);
        int option2 = knapsack(n-1, set, sum);
        return dp[n][sum] = (option1 + option2);
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

    cout << knapsack(n, set, sum) << endl;


    // Using Interation
    int dp2[n + 1][sum + 1];
    dp2[0][0]= 1;
    for (int i = 1; i <= sum; i++) {
        dp2[0][i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (set[i-1] <= j) {
                int option1 = dp2[i-1][j-set[i-1]];
                int option2 = dp2[i-1][j];
                dp2[i][j] = (option1 + option2);
            }
            else {
                dp2[i][j] = dp2[i-1][j];
            }
        }
    }
    cout << dp2[n][sum] << endl;

    return 0;
}