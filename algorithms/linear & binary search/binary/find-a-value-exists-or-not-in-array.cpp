/*
  Write a C++ program that takes N integer numbers that are sorted and distinct. The next line will contain an integer k. You need to tell whether K exists in that array or not. If it exists, print its index otherwise print “Not Found”. 
  
  Problem Link: https://docs.google.com/document/d/16w74DL8awgQN8DeIohXAgoY_7KBYKsOztyhzi5_ypIU/edit#heading=h.1ac808maaahq
*/

#include<bits/stdc++.h>
using namespace std;

int main () {

    // Find a value exits in array or not.
    // Time Complexity -> O(logN)

    int n;     // Size of the Array
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int x;     // Target value
    cin >> x;

    int idx;
    bool isFound = false;

    int lp = 0, rp = n-1, m = lp + (rp - lp) / 2;     // l = Left pointer, r = Right pointer & m = Mid pointer
    while (lp <= rp) {     // Using Binary Search Algorithm

        if (nums[m] == x) {
            isFound = true;
            idx = m;
            break;
        }
        else if (nums[m] < x) {
            lp = m + 1;
        }
        else {
            rp = m - 1;
        }
        m = lp + (rp - lp) / 2;
    }

    if (isFound == true) {
        cout << idx;
    }
    else {
       cout << "Not Found";
    }

    return 0;
}