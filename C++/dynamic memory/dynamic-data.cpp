#include<bits/stdc++.h>
using namespace std;

int main () {

    // Create data in Dynamic (Heap) memory

    // new int = Create a memory space in Heap memory & *a = pointing that 'new int' memory's address
    int *a = new int;       // Syntax 
    
    *a = 10;
    cout << a << endl;      // Output = 0x10a10d0 -> Address of heap memory

    cout << *a << endl;     // 10 -> Actual value

    return 0;
}