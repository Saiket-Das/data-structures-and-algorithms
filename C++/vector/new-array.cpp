#include<bits/stdc++.h>
using namespace std;

int main () {

    // New Array
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

    int n;
    cin >> n;     // Array length

    vector<int> v;
    vector<int> v2;
    vector<int> v3;     // Holds the concatenation of Vector 2 followed by Vector 1

    for (int i = 0; i < n; i++) {     // Vector 1 input
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < n; i++) {     // Vector 2 input
        int num;
        cin >> num;
        v2.push_back(num);
    }

    v3.insert(v3.begin(), v2.begin(), v2.end());     // Pushing Vector 1 elements into Vector 2

    v3.insert(v3.end(), v.begin(), v.end());     // Pushing Vector 1 elements into Vector 2

    for (int x:v3) {
        cout << x << " ";
    }

    return 0;
}