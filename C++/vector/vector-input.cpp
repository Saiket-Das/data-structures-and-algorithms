#include<bits/stdc++.h>
using namespace std;

int main () {

    // How to Take Input in Vector

    vector<int> v;

    int n;
    cin >> n;

    // One way
    // for (int i = 0; i < n; i++) {
    //     int a;
    //     cin >> a;
    //     v.push_back(a); 
    // }

    // Another way
    vector<int> v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    for (int x: v2) {
        cout << x << " ";
    }

    return 0;
}