#include<bits/stdc++.h>
using namespace std;

int main () {

    // Replace it
    // Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/replace-it-1-1

    int t;     // Number of testcase
    cin >> t;


    for (int i = 0; i < t; i++) {
        string str, x;
        cin >> str >> x;

        while (str.find(x) != -1) {
            int idx = str.find(x);
            // cout << idx << endl;
            str.replace(idx, x.size(), "$");
        }

        cout << str << endl;
    }

    return 0;
}