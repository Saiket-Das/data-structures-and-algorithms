#include<bits/stdc++.h>
using namespace std;

int* getArray (int n) {
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main () {

    // Dynamic Array

    int n;     // Array length
    cin >> n;

    int *arr = getArray(n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}