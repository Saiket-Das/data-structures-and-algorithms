#include<bits/stdc++.h>
using namespace std;

int main () {

    // Lucky
    // Problem link: https://codeforces.com/contest/1676/problem/A

    int n;     // Number of testcase
    cin >> n;

    for (int i = 0; i < n; i++) {
        string num;     // A string consisting of six digits
        cin >> num;

        int sum1 = 0, sum2 = 0;
        for (int j = 0, k = 5; j < k; j++, k--) {
            int j_num = num[j] - 48;      // Convert character to integer (first 3 digits)
            int k_num = num[k] - 48;      // Convert character to integer (last 3 digits)
            sum1 += j_num;
            sum2 += k_num;
        }

        if (sum1 == sum2) cout << "YES" << endl;
        else              cout << "NO"  << endl;
    }

    return 0;
}