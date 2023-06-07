#include<bits/stdc++.h>
using namespace std;

int main () {

    // Counting elements
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
    // Time complexity - O(N^2)     // Nested loop

    int n;
    cin >> n;     // The number of elements in the array

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int temp = v[i] + 1;
        for (int j = 0; j < n; j++) {
            if (temp == v[j]) {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}