#include<bits/stdc++.h>
using namespace std;

int main () {

    // Insert it
    // Problem link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/insert-the-vector

    int n;                  // 1st Array length
    cin >> n;

    vector<int> abc(n);     // 2nd Array - abc
    for (int i = 0; i < n; i++) {
        cin >> abc[i];
    }

    int m;                  // 2nd Array length
    cin >> m;

    vector<int> xyz(m);     // 2nd Array - xyz
    for (int i = 0; i < m; i++) {
        cin >> xyz[i];
    }

    int x;                  // Insert the whole array B to the index X of array A
    cin >> x;

    abc.insert(abc.begin()+x, xyz.begin(), xyz.end());     // Insert Vector 2 elements into Vector 1

    for (auto v : abc)     // Output
        cout << v << " ";

    return 0;
}