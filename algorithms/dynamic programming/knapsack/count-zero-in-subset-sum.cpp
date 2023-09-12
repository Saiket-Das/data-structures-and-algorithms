#include<bits/stdc++.h>
using namespace std;


int main () {     // Time Complexity - O(n*s)     // n = Array size & s = Sum value

    // Count Zero in Subset Sum

    int n;
    cin >> n;

    int set[n];
    for (int i = 0; i < n; i++) {
        cin >> set[i];
    }
    
    int sum;
    cin >> sum;

    int dp[n + 1][sum + 1];
    dp[0][0] = 1;

    for (int i = 1; i <= sum; i++) {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (set[i-1] <= j) {
                int option1 = dp[i-1][j-set[i-1]];
                int option2 = dp[i-1][j];
                dp[i][j] = (option1 + option2);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][sum] << endl;

    return 0;
}