#include<bits/stdc++.h>
using namespace std;

int main () {

    // Count Subset Sum with Given Difference

    int n;
    cin >> n;
    
    int s = 0;

    int set[n];
    for (int i = 0; i < n; i++) {
        cin >> set[i];
        s += set[i];
    }

    if (s % 2 == 0) {
        int sum = (s / 2);

        bool dp[n + 1][sum + 1];
        dp[0][0]= true;
        for (int i = 1; i <= sum; i++) {
            dp[0][i] = false;
        }
    
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (set[i-1] <= j) {
                    bool option1 = dp[i-1][j-set[i-1]];
                    bool option2 = dp[i-1][j];
                    dp[i][j] = (option1 || option2);
                 }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        if (dp[n][sum]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}