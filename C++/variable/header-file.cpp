#include<bits/stdc++.h>     // All c & c++ header file are included in this single file. 

// #include<iostream>
// #include<algorithm>     // To use swap()
// #include<utility>       // To use min() & max()
using namespace std;

int main () {

    int a, b;
    cin >> a >> b;

    swap(a, b);
    int mn = min(a, b);
    int mx = max(a, b);

    cout << "After Swap -> " << "a = " << a << " " << "b = " << b << endl;

    cout << "Minimum = " << mn << " & " << "Maximum = " << mx;

    return 0;
}