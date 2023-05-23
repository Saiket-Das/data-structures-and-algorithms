#include<bits/stdc++.h>
using namespace std;

int main () {

    // Capital or Small or Digit
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

    char x;
    cin >> x;

    if (x >= '0' && x <= '9') {
        cout << "IS DIGIT";
    }
    else if (x >= 'A' && x <= 'Z') {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }

    else if (x >= 'a' && x <= 'z') {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }

    return 0;
}