#include<bits/stdc++.h>
using namespace std;

int main () {

    // Max
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

    int n;
    cin >> n;

    int max = INT_MIN;     // Set Minimum value for a variable of type int as Maximum value

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > max) {     // Finding max value
            max = x;
        }
    }

    cout << max;     // Output

    return 0;
}