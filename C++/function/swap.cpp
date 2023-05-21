#include<iostream>
#include<utility>
using namespace std;


void swapValue (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main () {

    // Find min and max;

    int a, b;
    cin >> a >> b;
    
    cout << "Before swap -> " << a << " " << b << endl;
    // swapValue(&a, &b);     // Logic behind built-in swap() function
    swap(a, b);
    cout << "After swap -> " << a << " " << b;

    
}