#include<bits/stdc++.h>
using namespace std;

int main () {

    // O(N) Linear Time Complexity
    
    // Time complexity - O(N)     
    // O(N) + O(N)  =>  O(N +N)  =>  O(2N) is conceptually O(N) because as N approaches infinity.

    int n;     // Array length
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {     // O(N)
        cin >> arr[i];
    }

    int sum  = 0;
    for (int i = 0; i < n; i++) {     // O(N)
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    cout << sum;

    return 0;
}