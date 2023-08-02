#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int nums[N];

void merge(int left, int right, int mid) {
    // Calculate left array size and assign array
    int left_size = mid - left + 1;
    int L[left_size + 1];

    // Calculate right array size and assign array    
    int right_size = right - mid;
    int R[right_size + 1];

    // Left Array
    for (int i = left, j = 0; i <= mid; i++, j++) {
        L[j] = nums[i];
    }
    // Right Array
    for (int i = mid+1, j = 0; i <= right; i++, j++) {
        R[j] = nums[i];
    }

    // Assign last index's value Infinity
    L[left_size] = INT_MAX;
    R[right_size] = INT_MAX;

    // Left and Right pointer
    int lp = 0, rp = 0;
    for (int i = left; i <= right; i++) {
        if (L[lp] <= R[rp]) {
            nums[i] = L[lp];
            lp++;
        }
        else {
            nums[i] = R[rp];
            rp++;
        }
    }
}

void merge_sort(int left, int right) {

    if (left == right) return;

    int mid = (left + right) / 2;
    merge_sort(left, mid);
    merge_sort(mid + 1, right);

    merge(left, right, mid);
}


int main () {

    // Merger Sort

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // sort(nums, nums + n );

    // Implementation Merge Sort
    merge_sort(0, n-1);

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}