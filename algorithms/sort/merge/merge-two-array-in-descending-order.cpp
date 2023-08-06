/*
  You are given two sorted arrays arr1 and arr2 in descending order. Your task is to merge these two arrays into a new array result using the merge sort technique, but Instead of merging the arrays in ascending order, you need to merge them in descending order to create the result array.

  Problem Link: https://docs.google.com/document/d/16w74DL8awgQN8DeIohXAgoY_7KBYKsOztyhzi5_ypIU/edit#heading=h.1ac808maaahq
*/

#include<bits/stdc++.h>
using namespace std;


void merge_arrays (int arr1[], int arr2[], int arr3[], int n1, int n2) {
    int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<n1 && j <n2)
    {
        if (arr1[i] > arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
 
    // Store remaining elements of first array
    while (i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
        }
 
    // Store remaining elements of second array
    while (j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}



int main () {

    // Merge two array in descending order using Merge sort technique
    // Time Complexity -> O(logN)

    int n1, n2;     // Size of the Array 1 & Array 2

    // Array 1 input
    cin >> n1;        
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Array 2 input
    cin >> n2;        
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int arrMerge[n1+n2];
    merge_arrays(arr1, arr2, arrMerge, n1, n2);

    for (int i = 0; i < n1+n2; i++) {
        cout << arrMerge[i] << " ";
    }

    return 0;
}