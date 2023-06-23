#include<bits/stdc++.h>
using namespace std;

int main () {

    // Binary Search Algorithm
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
    // Time complexity -> O(N)

    int n, q;       // n = Array length & q = Queries (test case) 
    cin >> n >> q;

    int arr[n];  
    for (int i = 0; i < n; i++) {     // O(N) -> Array element input
        cin >> arr[i];
    }

    sort(arr, arr+n);                 // O(NlogN)

    while (q--) {
        int x;
        cin >> x;

        int l, r, m;
        l = 0;
        r = n - 1;

        bool isFound = false;     // l = Left, r = Right & m = Mid
        while (l <= r) {              // O(logN)
            m = (l + r) / 2;

            if(x == arr[m]) {
                isFound = true;
                break;
            }
            else if (x < arr[m]) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }

        if (isFound == false) cout << "not found" << endl;
        else                  cout << "found" << endl;

    }

    return 0;
}