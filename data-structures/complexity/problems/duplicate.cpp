#include<bits/stdc++.h>
using namespace std;

int main () {

    // Duplicate
    // Problem link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/duplicate-12

    int n;
    cin >> n;     // Array length

    int arr[n];
    for (int i = 0; i < n; i++) {     // Array element input
        cin >> arr[i];
    }

    bool isFound = false;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {     // Find is there any duplicate value in the array
                isFound = true;
                break;
            }
        }
    }

    if (isFound == true) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}