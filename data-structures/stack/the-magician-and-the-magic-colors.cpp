#include<bits/stdc++.h>
using namespace std;


int main () {

    // The Magician and The Magic Colors
    // Problem Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/magic-colors-and-the-magician

    stack<char> s;
    stack<char> colors;

    int t;      // Number of test cases
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;

        while (n--) {
            char c;
            cin >> c;

            if (s.empty()) {
                s.push(c);
            }
            else {
                if (((c == 'R') && (s.top() == 'B')) || ((c == 'B') && (s.top() == 'R'))) {                  // Red + Blue = P
                    s.pop();

                    if ((!s.empty()) && (s.top() == 'P')) {
                        s.pop();
                    }
                    else if ((!s.empty()) && (s.top() != 'P')) {
                        s.push('P');
                    }
                    else if (s.empty()) {
                        s.push('P');
                    }
                    
                }
                else if (((c == 'R') && (s.top() == 'G')) || ((c == 'G') && (s.top() == 'R'))) {             // Red + Green = Y
                    s.pop();
                    if ((!s.empty()) && (s.top() == 'Y')) {
                        s.pop();
                    }
                    else if ((!s.empty()) && (s.top() != 'Y')) {
                        s.push('Y');
                    }
                    else if (s.empty()) {
                        s.push('Y');
                    }
                }
                else if  (((c == 'B') && (s.top() == 'G')) || ((c == 'G') && (s.top() == 'B'))) {             // Blue + Green = C
                    s.pop();
                    if ((!s.empty()) && (s.top() == 'C')) {
                        s.pop();
                    }
                    else if ((!s.empty()) && (s.top() != 'C')) {
                        s.push('C');
                    }
                    else if (s.empty()) {
                        s.push('C');
                    }
                }
                else {
                    if ((!s.empty()) && (s.top() == c)) {
                        s.pop();
                    }
                    else {
                        s.push(c);
                    }
                }
            }
        }

        while (!s.empty()) {
            colors.push(s.top());
            s.pop();
        }

        while (!colors.empty()) {
            cout << colors.top();
            colors.pop();
        }

        cout << endl;
    }

    return 0;
}