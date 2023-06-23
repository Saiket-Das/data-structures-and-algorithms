#include<bits/stdc++.h>
using namespace std;

int main () {

    // O(sqrt(N)) Time Complexity

    int n;
    cin >> n;

    for (int i = 1; i <= sqrt(n); i++) {     // O(sqrt(N))
        if (n%i == 0) {
            cout << i << " ";
            if (n/i != i) {
                cout << n/i << endl;
            }
        }
    }

    cout << endl << endl;;

    for (int i = 1; i*i <= n; i++) {         // O(sqrt(N))
        if (n%i == 0) {
            cout << i << " ";
            if (n/i != i) {
                cout << n/i << endl;
            }
        }

        // 1 * 1 = 1 <= 12
        // 2 * 2 = 4 <= 12
        // 3 * 3 = 9 <= 12
    }

    return 0;
}