#include<bits/stdc++.h>
using namespace std;

int main () {

    // O(N^2) or O(N*N) N Square Time Complexity

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {          // O(N^2)
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // Selection sort                      // o(N^2)
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {

        }
    }

    return 0;
}