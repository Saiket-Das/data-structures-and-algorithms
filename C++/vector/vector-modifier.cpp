#include<bits/stdc++.h>
using namespace std;

int main () {

    // Vector Modifiers Functions

    vector<int> v = {1, 3, 5, 9, 3, 1, 11, 3};
    vector<int> v2 = {2, 4, 6};

    // v = v2;                                     // Same as v.assign()
    // v.assign(v2.begin(), v2.end());             // O(N) If sizes are different, O(1) otherwise (Assign another vector)

    v.push_back(7);                                // O(1) Add an element to the end

    v.pop_back();                                  // O(1) Remove the last element

    v.insert(v.begin()+2, 9);                      // O(N+K); where K is the number of elements to be inserted (Insert elements at a specific position)

    // v.erase(v.begin()+2);                       // O(N+K); where K is the number of elements to be deleted (Delete elements from a specific position)
    // v.erase(v.begin()+1, v.begin()+3);             

    replace(v.begin(), v.end()-1, 3, 7);           // O(N) Replace all the value(3) with replace_value(7) except last value because of (v.end()-1) Not under a vector

    // vector<int>:: iterator it;   or auto it     // Can use any of them
    auto it = find(v.begin(), v.end(), 1);         // O(N) Find the value V. Not under a vector
    cout << "Iterator or pointer value: " << *it << endl;     // Can't print iterator directly
    if (it == v.end()) {
        cout << "Not found" << endl;
    }
    else {
        cout << "Found" << endl; 
    }

    cout << "Vector elements: ";
    for (int x: v) {
        cout << x << " ";
    }

    return 0;
}