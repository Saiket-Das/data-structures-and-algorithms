#include<bits/stdc++.h>
using namespace std;

int main () {

    // Get Prefix Sum
    // Problem link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/get-prefix-sum

    int n;     // Array length
    cin >> n;

    int arr[n];
    long long prefix[n], prefix_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];               // Array element input

        prefix_sum += arr[i];        // Calculate prefix sum
        prefix[i] = prefix_sum;
    }

    reverse(prefix, prefix+n);       // Reverse the array

    for (int i = 0; i < n; i++) {    // Output
        cout << prefix[i] << " ";
    }

    return 0;
}