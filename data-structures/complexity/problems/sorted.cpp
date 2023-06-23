#include<bits/stdc++.h>
using namespace std;

int main () {

    // Sorted 
    // Problem link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/sorted-2-2


    int t;         // Number of test case
    cin >> t;

    while (t--) {
        int n;     // Array length
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {       // Array element input
            cin >> arr[i];
        }

        bool isSort = true;
        for (int i = 0; i < n-1; i++) {     // Find is the array sorted in ascending order
            if (arr[i] > arr[i+1]) {
                isSort = false;
                break;
            }
        }

        if (isSort == true) {               // Output
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}