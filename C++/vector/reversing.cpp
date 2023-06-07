#include<bits/stdc++.h>
using namespace std;

int main () {

    // Reversing
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

    int n;
    cin >> n;     // Array length

    vector<int> v(n);

    for (int i = 0; i < n; i++) {     // Vector element input
        cin >> v[i];
    }

    reverse(v.begin(), v.end());      // Time complexity - O(N)

    for (int x:v) {     // Vector elements print using ranged-based for loop
        cout << x << " ";
    }

    return 0;
}