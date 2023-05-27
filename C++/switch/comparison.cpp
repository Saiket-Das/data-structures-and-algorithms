#include<bits/stdc++.h>
using namespace std;

int main () {

    // Comparison
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

    int a, b;
    char s;

    cin >> a >> s >> b;     // Input

    switch (s) {
    case '>':
        (a > b ? cout << "Right" : cout << "Wrong");
        break;
    case '<':
        (a < b ? cout << "Right" : cout << "Wrong");
        break;
    case '=':
        (a == b ? cout << "Right" : cout << "Wrong");
        break;

    default:
        cout << "Right";
        break;
    }

    return 0;
}