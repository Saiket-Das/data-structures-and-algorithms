#include<bits/stdc++.h>
using namespace std;

int main () {

    // O(logN) Logarithmic Time Complexity
    // Logarithmic Complexity O(logN) is better than Linear Complexity O(N)
    
    int n;
    cin >> n;

    while (n > 0) {                      // O(log N)
        int digit = n % 10;
        cout << digit << " ";
        n/=10;
    }


    // Input: 124 (1st for loop 124 steps. On the other hand, 2nd loop only 7 steps)

    for (int i = 1; i <= n; i++) {       // O(N)
        cout << i << endl;
    }

    for (int i = 1; i <= n; i=i*2) {     // O(log N)
        cout << i << endl;
    }


    return 0;
}