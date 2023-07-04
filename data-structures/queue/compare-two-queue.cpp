#include<bits/stdc++.h>
using namespace std;

bool compareStack (stack<int> s, queue <int> q) {
    if (q.size() != q.size()) {
        return false;
    }

    while(!s.empty()) {
        if(s.top() != q.front()) return false;
        s.pop();
        q.pop();
    }

    return true;
}

int main () {

    // Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

    /*
      Input
        5
        10 20 30 40 50
        5
        10 20 30 40 50
      
      Output
        NO
      ------------------
      Input
        5
        10 20 30 40 50
        4
        10 20 30 40
      
      Output
        NO
      ------------------
      Input
        5
        10 20 30 40 50
        5
        50 40 30 20 10

      Output
        YES
    */

    stack<int> s;
    queue<int> q;

    int n, m;                      // n - Number of element (Stack) & m - Number of element (Queue)

    cin >> n;
    while (n--) {
        int value;
        cin >> value;
        s.push(value);
    }

    cin >> m;
    while (m--) {
        int value;
        cin >> value;
        q.push(value);
    }

    bool isSame = compareStack(s, q);

    if (isSame == false) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    
    return 0;
}