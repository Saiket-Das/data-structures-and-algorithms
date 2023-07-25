#include<bits/stdc++.h>
using namespace std;

int main () {

    // Unique Sorted
    // Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structures-a-batch-03/challenges

    int t;          // Numbers of testcase
    cin >> t;

    while (t--) {

        set<int> st;
        priority_queue<int> pq;

        int n;                     // Length of Array
        cin >> n;

        while (n--) {
            int x;                 // Value input 
            cin >> x;
            st.insert(x);          // Save the value into list
        }

        for (auto val : st) {
            pq.push(val);          // Sort the list
        }

        while (!pq.empty()) {      // Clear the list
            cout << pq.top() << " ";     // Output
            pq.pop();
        }
        cout << endl;
    }

    return 0;
}