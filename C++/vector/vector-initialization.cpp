#include<bits/stdc++.h>
using namespace std;

int main () {

    // Vector Initialization and Constructors

    // vector<int> v;               (Type 1 -> Size: 0)
    // vector<int> v(3);            (Type 2 -> Size: 3, value - {0, 0, 0})
    // vector<int> v2(5, 3);        (Type 3 -> Size: 3, value - {1, 1, 1})
    // vector<int> v(v2);           (Type 4 -> Size: 3, value - {1, 1, 1})    // Copy from another Vector(v2)

    int arrr[3] = {1, 2, 3}
    // vector<int> v(a, a+3));      (Type 5 -> Size: 3, value - {1, 2, 3})    // Copy from Array
    // vector<int> v = {4, 5, 6};   (Type 6 -> Size: 3, value - {4, 5, 6})

    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;

    return 0;
}