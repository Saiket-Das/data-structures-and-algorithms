#include<bits/stdc++.h>
using namespace std;

void fun (int *&p) {        // Reference of a Pointer
    cout << &p << endl;     // Pointer address
}

int main () {

    // Reference of a Pointer

    int value = 10;
    int *p = &value;
    cout << value << endl;     // Value
    cout << &value << endl;    // Value's address 
    fun(p);
    cout << &p << endl;       // Pointer address

    return 0;
}