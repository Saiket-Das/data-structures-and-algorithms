#include<bits/stdc++.h>
using namespace std;

void insert_max_heap (vector<int> &v, int x) {
    v.push_back(x);
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

void delete_from_max_heap (vector<int> &v) {     // Time Complexity -> O(logN) 
    v[0] = v[v.size() - 1];     // Swap first and last index's value
    v.pop_back();

    int curr = 0;
    while (true) {
        int left_idx = (curr * 2) + 1;
        int right_idx = (curr * 2) + 1;
        int last_idx = v.size() - 1;

        if ((left_idx <= last_idx) && (right_idx <= last_idx)) {
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[curr]) {
                swap(v[left_idx], v[curr]);
                curr = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[curr]) {
                swap(v[right_idx], v[curr]);
                curr = right_idx;
            }
            else {
                break;
            }
        }
        else if (left_idx <= last_idx){
            if (v[curr] < v[left_idx]) {
                swap(v[left_idx], v[curr]);
                curr = left_idx;
            }
            else {
                break;
            }
        }
        else if (right_idx <= last_idx) {
            if (v[curr] < v[right_idx]) {
                swap(v[right_idx], v[curr]);
                curr = right_idx;
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
}


int main () {

    // Delete from Max Heap

    int n;
    cin >> n;
    
    vector<int> v;
    while (n--) {
        int x;       // Insert value
        cin >> x;
        insert_max_heap(v, x);
    }
    
    cout << "After Insert: ";
    for (int val: v) cout << val << " ";
    cout << endl;

    cout << "After Delete: ";
    delete_from_max_heap (v);
    for (int val: v) cout << val << " ";

    return 0;
}