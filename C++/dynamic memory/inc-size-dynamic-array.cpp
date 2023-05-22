#include<bits/stdc++.h>
using namespace std;

int main () {

    // Increase size of array using Dynamic Array

    int *arr1 = new int[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    cout << "Array 1 -> ";     // Print array 1
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int *arr2 = new int[7];     // Declare a new array with new size

    for (int i = 0; i < 7; i++) {
        arr2[i] = arr1[i];
    }

    cin >> arr2[5] >> arr2[6];

    delete[] arr1;     // Delete array 1

    cout << "Array 2 -> ";     // Print array 2
    for (int i = 0; i < 7; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}