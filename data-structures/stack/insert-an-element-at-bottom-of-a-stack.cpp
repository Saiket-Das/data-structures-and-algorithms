/*
  Insert An Element At Its Bottom In A Given Stack
  Problem Link: https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
*/

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) {
    // Write your code here.

    stack<int> st;

    while (!myStack.empty()) {          // Copy the main stack's(myStack) element into new stack(st) (myStack = [1, 3, 5, 7] -> st = [7, 5, 3, 1])
        int topVal = myStack.top();
        st.push(topVal);
        myStack.pop();                  // After pop all element (myStack = [])
    }

    myStack.push(x);                    // myStack = [9]

    while (!st.empty()) {               // Transfer new stack's(st) element into the main stack(myStack) (st = [7, 5, 3, 1] -> myStack = [9, 1, 3, 5, 7])
        int topVal = st.top();
        myStack.push(topVal);
        st.pop();
    }

    return myStack;
}