/*
  Backspace String Compare
  Problem Link: https://leetcode.com/problems/backspace-string-compare/description/
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st2;

        for (char c:s) {        // Pusing 1st string's char into stack 1 (st) 
            if (c == '#') {
                if (!st.empty()) st.pop();
            }
            else {
                st.push(c);
            }
        }

        for (char c:t) {        // Pusing 2nd string's char into stack 2 (st2) 
            if (c == '#') {
                if (!st2.empty()) st2.pop();
            }
            else {
                st2.push(c);
            }
        }

        if (st.size() != st2.size()) {        // Comparing both stack's size
            return false;
        }

        while (!st.empty()) {                // Comaparing both stack's value
            if (st.top() != st2.top()) {
                return false;
            }
            st.pop();
            st2.pop();
        }

        return true;
    }
};