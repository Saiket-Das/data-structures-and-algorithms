#include<bits/stdc++.h>
using namespace std;\

int main () {

    // Make it
    // Problem Link: https://www.hackerrank.com/contests/assignment-04-a-introduction-to-algorithms-a-batch-03-1/challenges/make-it-2

    int t;     // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool dp[n + 1];
        for (int i = 0; i <= n; i++) {
            dp[i] = false;
        }
        dp[1] = true;

        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                dp[i] = dp[i / 2];
            }
            if (i >= 3) {
                dp[i] = dp[i] || dp[i - 3];
            }
        }

        if (dp[n]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}