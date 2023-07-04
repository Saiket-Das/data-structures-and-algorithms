#include<bits/stdc++.h>
using namespace std;


int main () {

    // Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

    /*
      Input
        5
        10 20 30 40 50

      Output
        50 40 30 20 10
    */

    queue<int> q;
    stack<int> s;

    int n;                 // n - Number of element (Queue 1)
    cin >> n;

    while (n--) {
        int value;
        cin >> value;
        q.push(value);
    }

    while(!(q.empty())) {
        int front = q.front();
        s.push(front);
        q.pop();
    }

    while(!(s.empty())) {
        int top = s.top();
        q.push(top);
        s.pop();
    }

     while(!(q.empty())) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}