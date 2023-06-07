#include<bits/stdc++.h>
using namespace std;

int main () {

    // Replacement
    // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

    // Time complexity - O(N^2)

    int n;
    cin >> n;     // Array length

    vector<int> v(n);

    for (int i = 0; i < n; i++) {     // Vector element input
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] > 0) {     // Replace every positive number by 1
            replace(v.begin(), v.end(), v[i], 1);     // O(N)
        }
        if (v[i] < 0) {     // Replace every negative number by 2
            replace(v.begin(), v.end(), v[i], 2);     // O(N)
        }
    }

    for (int x:v) {     // Vector elements print using ranged-based for loop
        cout << x << " ";
    }

    return 0;
}