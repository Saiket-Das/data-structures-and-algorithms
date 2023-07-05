/*
  Reversing a Queue
  Problem Link: https://www.codingninjas.com/studio/problems/reversing-a-queue_982934
*/

#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    stack<int> s;

    while (!q.empty()) {        // Copy elements from queue to stack 
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {        // Copy elements from stack to queue 
        q.push(s.top());
        s.pop();
    }

    return q;
}