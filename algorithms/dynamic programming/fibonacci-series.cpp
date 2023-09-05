#include<bits/stdc++.h>
using namespace std;

int recursion (int n) {
    if ((n == 0) || (n == 1)) return 1;
    int ans1 = recursion(n-1);
    int ans2 = recursion(n-2);

    return ans1 + ans2;
}

int main () {     // Time Complexity - O(2^n)

    // Fibonacci Series using Recursion
    
    int n;
    cin >> n;

    cout << recursion(n) << endl;

    return 0;
}