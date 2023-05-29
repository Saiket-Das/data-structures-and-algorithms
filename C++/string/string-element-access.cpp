#include<bits/stdc++.h>
using namespace std;

int main () {

    // String element access built-in functions

    string str;
    str = "Ahan";

    cout << str[0] << endl;                      // Answer = 'A'
    cout << str.at(1) << endl;                   // Answer = 'h' (using built-in function)

    cout << str[str.size()-1] << endl;           // Answer = 'n'
    cout << str.back() << endl;                  // Answer = 'n' (Find last element) (using built-in function)
    cout << str.front() << endl;                 // Answer = 'A' (Find last element) (using built-in function)

    return 0;
}