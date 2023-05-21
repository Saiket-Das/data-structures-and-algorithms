#include<iostream>
#include<iomanip>
using namespace std;

int main () {

    // How to print floating value in C++

    float a;

    cin >> a;     // Input

    cout << "a = " << fixed << setprecision(2) << a << endl;     // Output

    return 0;
}