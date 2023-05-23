#include<bits/stdc++.h>
using namespace std;

int main () {

    // Sorting
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

    int n;     // Array length
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];     // Array input
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[j-1] > arr[j]) {     // Array sorting
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";     // Output
    }

    return 0;
}