#include<bits/stdc++.h>
using namespace std;

int main () {

    // Simple Calculator
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

    int x, y;
    cin >> x >> y;

    int sum = x + y;
    long long int multi = (long long int)x * y;
    int sub = x - y;
    
    cout << x << " + " << y << " = "<< sum << endl;     // Sum
    cout << x << " * " << y << " = "<< multi << endl;     // Multi
    cout << x << " - " << y << " = "<< sub << endl;     // Sub

    return 0;
}