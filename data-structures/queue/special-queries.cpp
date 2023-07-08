#include<bits/stdc++.h>
using namespace std;

int main () {

    // Special Queries
    // Problem Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/special-queries-1-1

    queue<string> q;

    int n;      // Number of queries
    cin >> n;

    while (n--) {
        int m;     // Command
        cin >> m;


        if (m == 0) {
            string str;
            cin >> str;
            q.push(str);
        }
        else {
            if (q.empty()) {
                cout << "Invalid" << endl;
            }
            else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}