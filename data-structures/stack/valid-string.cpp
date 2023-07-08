#include<bits/stdc++.h>
using namespace std;

int main () {

    // Valid String
    // Problem Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/valid-parentheses-16

    stack<char> s;

    int t;      // Number of test cases
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        for (char c:str) {
            if (s.empty()) {
                s.push(c);                                      // If stack is empty then push the letter
            }
            else {
                if ((c == 'A') & (s.top() == 'B')) {            // If char is 'A' & top value of stack is 'B' then delete top value from stack
                    s.pop();
                }
                else if ((c == 'B') & (s.top() == 'A')) {       // If char is 'B' & top value of stack is 'C' then delete top value from stack
                    s.pop();
                }
                else {                                          // If all the conditions are false then push value to stack
                    s.push(c);
                }
            }
        }
        
        if (s.empty()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
            while (!s.empty()) {
                s.pop();
            }
        }
    }

    return 0;
}