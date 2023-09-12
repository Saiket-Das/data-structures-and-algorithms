#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int dp[N][N];

bool subset_sum(int mark[], int n, int s) {
    if (n == 0) {
        if (s == 0) return true;
        else        return false;
    }

    if (dp[n][s] != -1) {
        return dp[n][s];
    }

    if (mark[n - 1] <= s) {
        bool op1 = subset_sum(mark, n - 1, s - mark[n - 1]);
        bool op2 = subset_sum(mark, n - 1, s);
        return dp[n][s] = (op1 || op2);
    }
    else {
        return dp[n][s] = subset_sum(mark, n - 1, s);
    }
}

int main () {

    // Exam Marks
    // Problem Link: https://www.hackerrank.com/contests/assignment-04-a-introduction-to-algorithms-a-batch-03-1/challenges/exam-marks

    int t;     // t = Number of test cases
    cin >> t;

    while (t--) {
        int n, m;     // n = List of N marks & m = received marks
        cin >> n >> m;

        int s = 1000 - m;     // s = Marks need

        int mark[n];
        for (int i = 0; i < n; i++) {
            cin >> mark[i];
        }

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= s; j++)
            {
                dp[i][j] = -1;
            }
        }
        if (subset_sum(mark, n, s)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}