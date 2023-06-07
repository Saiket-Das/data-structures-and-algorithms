#include<bits/stdc++.h>
using namespace std;

int main () {

    // Count Letters
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
    // Time complexity - O(N)

    string str;
    cin >> str;

    vector<int> v(26);     // Vector as frequency array
    v = {0};

    for (char c:str) {     // Get the character from string using range-based for loop
        int idx = c - 'a';
        v[idx]++;
    }

    for (int i = 0; i < 26; i++) {
        if (v[i] > 0) {
            char c = i + 'a';
            cout << c << " : " << v[i] << endl;
        }
    }

    return 0;
}