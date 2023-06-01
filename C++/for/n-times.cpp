#include<bits/stdc++.h>
using namespace std;

int main () {

    // N Times
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

    int t;
    cin >> t;     // Number of testcase

    for (int i = 0; i < t; i++) {
        int n;
        char c;
        cin >> n;
        cin >> c;

        cout << c;     // Print the character 1 time

        for (int j = 1; j < n; j++) {
            cout << " " << c;
        }
        cout << endl;
    }

    return 0;
}