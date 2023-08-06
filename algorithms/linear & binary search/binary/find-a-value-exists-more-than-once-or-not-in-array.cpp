/*
  You are given an array of N positive integers. The next line will contain an integer K. You need to tell whether there exists more than one occurrence of K in that array or not. If there exists more than one occurrence of K print YES, Otherwise print NO.
  See the sample input-output for more clarification.
  The given array will be sorted in increasing order. And it is guaranteed that at least one occurrence of K will exist.	 You must solve this in O(logn) complexity.

  Problem Link: https://docs.google.com/document/d/16w74DL8awgQN8DeIohXAgoY_7KBYKsOztyhzi5_ypIU/edit#heading=h.1ac808maaahq
*/

#include<bits/stdc++.h>
using namespace std;

int main () {
  
    // Find a value exists more than once or not in an Array
    // Time Complexity -> O(LogN)

    int n;     // Size of the Array
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    

    int x;     // Target value
    cin >> x;


    int lp = 0, rp = n - 1, mid;
    bool isTrue = false;

    while (lp <= rp) {
        mid = lp + (rp - lp) / 2;

        if (arr[mid] == x) {
            if (arr[mid] == arr[mid+1] || arr[mid] == arr[mid-1]) {
                isTrue = true;
            }
            break;
        }
        else if (arr[mid] < x) {
            lp = mid + 1;
        }
        else {
            rp = mid - 1;
        }
    }

    if (isTrue == true) cout << "YES";
    else                cout << "NO";

    return 0;
}


            // else {
            //     if (arr[mid] < x) {
            //         mid = lp + 1;
            //     }
            //     else {
            //         mid = rp - 1;
            //     }
            // }