#include<bits/stdc++.h>
using namespace std;

int main () {

    // Vector Capacity Functions

    vector<int> v = {1, 3};

    cout << "Vec size: " << v.size() << endl;         // O(1) Returns the size of the vecto

    cout << "Max size: " << v.max_size() << endl;     // O(1) Returns the maximum size that the vector can hold

    cout << "Capacity: " << v.capacity() << endl;     // O(1) Answer: 2 (Returns the current available capacity of the vector)
    v.push_back(5);
    cout << "Capacity: " << v.capacity() << endl;     // O(1) Answer: 4 (Answer supposed to be 3 after pushing 1 element but Every time we run out of capacity, the vector doubles it's capacity)

    // v.clear();                                     // O(N) Clears the vector elements. Do not delete the memory, only clear the value
    cout << "Individual access: " << v[2] << endl;    // Can access the vector's element individually after clear the vector 

    cout << "is Empty: " << v.empty() << endl;        // O(1) Answer = 1 (True) (Return true/false if the vector is empty or not)

    // v.resize(1);                                   // O(K) Change the size of the vector
    v.resize(5, 2);                                   // 2 is the rest of the element's value after increase the size of the vector 

    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}