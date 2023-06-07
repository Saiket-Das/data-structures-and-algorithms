#include<bits/stdc++.h>
using namespace std;

int main () {

    // Vector Access

    vector<int> v = {2, 4, 6, 8, 10};

    cout << "First value: " << v[0] << endl;                      
    cout << "First value func: " << v.front() << endl;             // O(1)

    cout << "i th element: " << v[2] << endl;
    cout << "i th element: " << v.at(2) << endl;                   // O(1)

    cout << "Last value: " << v[v.size()-1] << endl;
    cout << "Last value func: " << v.back() << endl;               // O(1)

    cout << "Vector element: ";
    for (auto it = v.begin(); it < v.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}