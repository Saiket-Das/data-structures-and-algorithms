#include<iostream>
#include<algorithm>     // To use min() & max() in-built function
using namespace std;


int findMin (int a, int b) {
    if (a < b) return a;
    else       return b;
}

int findMax (int a, int b) {
    if (a < b) return b;
    else       return a;
}

int main () {

    // Find min and max;

    int a, b;
    cin >> a >> b;
    
    // int min = findMin(a, b);
    // int max = findMax(a, b);

    int mn = min(a, b);
    int mx = max(a, b);

    cout << "Minimum = " << mn << endl << "Maximum = " << mx;
    
}