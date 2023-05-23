#include<bits/stdc++.h>
using namespace std;

int main () {

    // Increase the size of Array using Dynamic array

    int n;     // Array length
    cin >> n;

    int *arr1 = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];     // Array input
    }
    

    int m;     // New array length
    cin >> m;
    int *arr2 = new int[m];     // New array with new size

    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];     // Copied all elemets of first array into new array
    }

    delete[] arr1;

    for (int i = n; i < m; i++) {
        cin >> arr2[i];     // Input of others element's value of new array
    }

    // for (int i = 0; i < n; i++) {
    //     cout << arr1[i] << " ";     // Just checking that first array has deleted (It will give us garbage value)
    // }
    // cout << endl;

    for (int i = 0; i < m; i++) {     // Print all elements of new array
        cout << arr2[i] << " ";     // Output 
    }
    

    return 0;
}