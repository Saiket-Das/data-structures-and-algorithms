#include<bits/stdc++.h>
using namespace std;

int* fun () {
    int *arr =  new int[5];     // Allocate a memory in Heap memory

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    return arr;
}

int main () {

    // Return Dynamic Array from Function

    int *arr = fun();

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}