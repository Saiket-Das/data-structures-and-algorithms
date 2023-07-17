#include<bits/stdc++.h>
using namespace std;

int main () {

    // Insert in Max Heap Implementation

    vector<int> v;

    int n;
    cin >> n;
    
    while (n--) {                          // Time complexity - (O(NlogN))          
        int x;       // Insert value
        cin >> x;
    
        v.push_back(x);                    // Time complexity - (O(logN))
        int curr_idx = v.size() - 1;
        
        while (curr_idx != 0) {
            int parent_idx = (curr_idx - 1) / 2;
    
            if (v[parent_idx] < v[curr_idx]) {
                swap(v[parent_idx], v[curr_idx]);
            }
            else break;
    
            curr_idx = parent_idx;
        }
    }

    for (int val: v) cout << val << " ";

    return 0;
}