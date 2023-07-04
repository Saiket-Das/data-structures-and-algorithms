#include<bits/stdc++.h>
using namespace std;


int main () {

    // Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.

    /*
      Input
        5
        10 20 30 40 50

      Output
        10 20 30 40 50
    */

    stack<int> s1;
    stack<int> s2;

    int n;                 // n - Number of element (Stack 1)
    cin >> n;

    while (n--) {
        int value;
        cin >> value;
        s1.push(value);
    }

    while(!(s1.empty())) {
        int top = s1.top();
        s2.push(top);
        s1.pop();
    }

    while(!(s2.empty())) {
        cout << s2.top() << " ";
        s2.pop();
    }
    
    return 0;
}