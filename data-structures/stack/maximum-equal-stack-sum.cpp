/*
  Maximum Equal Stack Sum
  Problem Link: https://www.codingninjas.com/studio/problems/maximum-equal-stack-sum_1062571
*/

#include <bits/stdc++.h> 

int getSum (stack<int> st) {
    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    return sum;
}

int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3) {
    // Write your code here
    
    // Find the sum of all stacks
    int sum1 = getSum(st1);
    int sum2 = getSum(st2);
    int sum3 = getSum(st3);


    while (true) {
        if (sum1 == sum2 && sum1 == sum3) break;     // If the sum of all stacks are equal then break and return any stack's sum value

        if (sum1 >= sum2 && sum1 >= sum3) {          // If 1st stack's overall sum value is more than other stack's sum then subtract top element value of 1st stack from 1st stack's overall sum
            sum1 -= st1.top();
            st1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3) {     // If 2nd stack's overall sum value is more than other stack's sum then subtract top element value of 2nd stack from 2nd stack's overall sum
            sum2 -= st2.top();
            st2.pop();
        }
        else {                                       // If 3rd stack's overall sum value is more than other stack's sum then subtract top element value of 3rd stack from 3rd stack's overall sum
            sum3 -= st3.top();
            st3.pop();
        }
    }
    // If all stack's sum are not equal then we will 0 at the end 
    return sum1;
}