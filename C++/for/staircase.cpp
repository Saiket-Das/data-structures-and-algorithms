#include<bits/stdc++.h>
using namespace std;

int main () {

    // Staircase
    // Problem link: https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

    int n;     // the size of the staircase
    cin >> n;

    int k = n-1, l = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            cout << " ";     // Pirnt space
        }
        for (int j = 1; j <= l; j++) {
            cout << "#";     // Pirnt hashtag
        }
        cout << endl;
        k--;     // Spcae decrease by 1
        l++;     // Hashtag increase by 1
    }

    return 0;
}