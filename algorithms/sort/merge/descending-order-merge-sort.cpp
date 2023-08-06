/*
  Write a C++ program that takes N integer numbers and sorts them in non-increasing order using Merge Sort. 
  Problem Link: https://docs.google.com/document/d/16w74DL8awgQN8DeIohXAgoY_7KBYKsOztyhzi5_ypIU/edit#heading=h.1ac808maaahq
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int nums[N];


void merge (int l, int r, int m) {     // l = Left, r = Dight & m = Mid
    // Calculate left array size and assign array
    int left_size = m - l + 1;
    int left[left_size + 1];

    // Calculate right array size and assign array    
    int right_size = r - m;
    int right[right_size + 1];

    // Left Array
    for (int i = l, j = 0; i <= m; i++, j++) {
        left[j] = nums[i];
    }
    // Right Array
    for (int i = m+1, j = 0; i <= r; i++, j++) {
        right[j] = nums[i];
    }

    // Assign value of Left & Right array's last index as Macro or Minimum value
    left[left_size] = INT_MIN;
    right[right_size] = INT_MIN;

    int lp = 0, rp = 0;     // Left and Right pointer
    for (int i = l; i <= r; i++) {
        if (left[lp] >= right[rp]) {
            nums[i] = left[lp];
            lp++;
        }
        else {
            nums[i] = right[rp];
            rp++;
        }
    }
}

void merge_sort (int left, int right) {
    if (left == right) return;

    int mid = (left + right) / 2;
    merge_sort(left, mid);
    merge_sort(mid + 1, right);

    merge(left, right, mid);
}

int main () {

    // Sort a array in descending order using Merge Sort
    // Time Complexity -> O(NlogN)

    int n;     // Size of the array
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    merge_sort(0, n-1);

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}