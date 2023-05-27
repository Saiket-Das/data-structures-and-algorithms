#include<bits/stdc++.h>
using namespace std;

int main () {

    // Palindrome Array
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

    int n;
    cin >> n;     // Array length

    int arr[n];
    for (int i = 0; i < n; i++) {     // Array element input
        cin >> arr[i];
    }

    int isTrue = 1;     // 1 = True & 0 = False
    for (int i = 0, j = n-1; i < j; i++, j--) {     // Two pointer technique
        if(arr[i] != arr[j]) {
            isTrue = 0;
            break;
        }
    }

    if (isTrue == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}