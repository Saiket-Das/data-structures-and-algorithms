#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dp[N];

int recursion (int a[], int n) {
    if (n == 1) {
        return 0;
    }

    if (dp[n] != -1) {
        return dp[n];
    }
    else if (n == 2) {
        dp[n] = abs(a[2] - a[1]);
        return dp[n];
    }
    else {
        int choice1 = recursion(a, n-1) + abs(a[n] - a[n-1]);
        int choice2 = recursion(a, n-2) + abs(a[n] - a[n-2]);
        return dp[n] = min(choice1, choice2);
    }
}

int main () {     // Time Complexity - O(n)

    // A - Frog 1 using Memoization
    // Problem Link: https://atcoder.jp/contests/dp/tasks/dp_a
    
    int n;
    cin >> n;

    int arr[n+1];

    for (int i = 1; i <= n; i++) {
        dp[i] = -1;
        cin >> arr[i];
    }

    cout << recursion(arr, n);

    return 0;
}