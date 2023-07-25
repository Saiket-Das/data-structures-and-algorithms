#include<bits/stdc++.h>
using namespace std;

int main () {

    // Give Current Min
    // Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structures-a-batch-03/challenges/give-max-min

    priority_queue<int, vector<int>, greater<int>> pq;        // Min Heap

    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        pq.push(x);
    }

    int queries;
    cin >> queries;

    while (queries--) {
        int command;
        cin >> command;

        if (command == 0) {             // Insert new value
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        
        else if (command == 1) {        // Print top value (min) if available else print "Empty"
            if (pq.empty() == true)  cout << "Empty" << endl;
            else                     cout << pq.top() << endl;
        }

        else if (command == 2) {        // Delete top value then print the top value (min) if available else print "Empty"
            if (pq.empty() == true) {
                cout << "Empty" << endl;
            }
            else {
                pq.pop();
                if (pq.empty() == true)  cout << "Empty" << endl;
                else                     cout << pq.top() << endl;
            }
        }
    }

    return 0;
}