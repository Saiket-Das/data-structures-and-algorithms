#include<bits/stdc++.h>
using namespace std;

int main () {

    // Sorting in-built function

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {     // Array input
        cin >> arr[i];
    }
    /*
      In-built sorting function
        Parameters of this function (first array element pointer arr[0])

        1st -> Pass the actuall array

        2nd -> Second parameter explanation
        ------   ------   ------   ------   ------   ------
        arr[0] | arr[1] | arr[2] | arr[3] | arr[4] | arr[5]
        ------   ------   ------   ------   ------   ------
                                                    (a+n) 👆     // Give extra +1 length. It wil sort the array before this number. For exmple, If I pass a+3 as 2nd parameter. It will sort the array from arr[0] to arr[2].
        
        3rd -> Optional. If we want to sort descending


    */
    sort(arr, arr+n, greater<int>());     // In-built soring function

    for (int i = 0; i < n; i++) {     // Output after sorting
        cout << arr[i] << " ";
    }

    return 0;
}