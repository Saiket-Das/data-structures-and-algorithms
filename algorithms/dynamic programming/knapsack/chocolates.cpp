#include<bits/stdc++.h>
using namespace std;

int main () {

    // Chocolates
    // Problems Link: https://www.hackerrank.com/contests/assignment-04-a-introduction-to-algorithms-a-batch-03-1/challenges/chocolates-22-1

    int t;     // t = Number of test cases
    cin >> t;

    while (t--) {
        int n;     // n = Boxes of chocolates
        cin >> n;

        int total = 0;
        int box[n];
        for (int i = 0; i < n; i++) {
            cin >> box[i];
            total += box[i];
        }

        if (total % 2 == 0) {
            int sum = (total / 2);

            bool dp[n + 1][sum + 1];

            dp[0][0] = true;
            for (int i = 1; i <= sum; i++) {
                dp[0][i] = false;
            }

            for (int i = 1; i <= n; i++) {
                for (int j = 0; j <= sum; j++) {
                    if (box[i - 1] <= j) {
                        bool option1 = dp[i - 1][j - box[i - 1]];
                        bool option2 = dp[i - 1][j];
                        dp[i][j] = (option1 || option2);
                    }
                    else {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][sum]) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}