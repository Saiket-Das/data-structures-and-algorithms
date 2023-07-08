#include<bits/stdc++.h>
using namespace std;

bool isSame (stack<int> s, queue<int> q) {
    if (s.size() != q.size()) {
        return false; 
    }

    while (!s.empty()) {
        if (s.top() != q.front()) {
            return false; 
        }
        s.pop();
        q.pop();
    }
    return true;
}


int main () {

    // Same to Same Again and Again
    // Problem Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/same-to-same-again

    stack<int> s;
    queue<int> q;

    int n, m;       // n = Number of elements (Stack) & m = Number of elements (Queue)
    cin >> n >> m;

    while (n--) {          // Stack input
        int value;
        cin >> value;
        s.push(value);
    }
    while (m--) {          // Queue input
        int value;          
        cin >> value;
        q.push(value);
    }

    bool same = isSame (s, q);

    if (same == true) cout << "YES" << endl;
    else              cout << "NO" << endl;

    return 0;
}