#include<bits/stdc++.h>
using namespace std;

int main () {

    // ICPC Balloons
    // Problem link: https://codeforces.com/contest/1703/problem/B

    int n;     // Number of testcase
    cin >> n;

    for (int i = 0; i < n; i++) {
        int p;     // Number of problems solved
        cin >> p;

        string str;     // Problem (A-Z)
        cin >> str;

        int total_ballons = 0;     // Total number of balloons that the teams received
        int ballon[26] = {0};      // Frequency array with 26 integer (A-Z)

        for (int j = 0; j < p; j++) {
            int pos = str[j] - 'A';     // Find the integer from character. Example, A = 0, B = 1, S = 18, so on

            if (ballon[pos] > 0) {     // If problem is already solved. Then team will get 1 ballon
                ballon[pos] += 1;
            }
            else {
                ballon[pos] += 2;      // If team is sloving the problem for 1st time. Then team will get 2 ballons
            }
        }

        for (int j = 0; j < 26; j++) {
            if (ballon[j] > 0) {
                total_ballons += ballon[j];     // Calculate total number of balloons that the teams received   
            }
        }

        cout << total_ballons << endl;     // Output
    }

    return 0;
}