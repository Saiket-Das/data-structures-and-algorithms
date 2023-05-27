#include<bits/stdc++.h>
using namespace std;

int main () {

    // Mathematical Expression
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

    int a, b, c;
    char s, e;

    cin >> a >> s >> b >> e >> c;     // Input

    switch (s) {
    case '+':
        ((a + b == c) ? cout << "Yes" : cout << (a + b));
        break;
    case '-':
        ((a - b) == c ? cout << "Yes" : cout << (a - b));
        break;

    default:
        ((a * b == c) ? cout << "Yes" : cout << a * b);
        break;
    }

    return 0;
}