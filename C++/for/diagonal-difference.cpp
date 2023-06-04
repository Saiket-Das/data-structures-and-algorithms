#include<bits/stdc++.h>
using namespace std;

int main () {

    // Diagonal Difference
    // Problem link: https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

    int n;     // The number of rows and columns in the square matrix
    cin >> n;

    int arr[n][n];     // Square matric

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];     // // Square matric input
        }
    }

    int p_sum = 0, s_sum = 0;

    for (int i = 0, j = n-1; i < n; i++, j--) {
        for (int k = 0; k < n; k++) {
            if (i == k) {
                p_sum += arr[i][k];     // Sum across the primary diagonal 
            }
            if (j == k) {
                s_sum += arr[i][k];     // Sum across the secondary diagonal
            }
        }
    }

    cout << abs(s_sum - p_sum);     // Absolute difference of primary and secondary diagonal's sum

    return 0;
}