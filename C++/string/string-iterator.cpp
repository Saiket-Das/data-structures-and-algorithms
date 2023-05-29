#include<bits/stdc++.h>
using namespace std;

int main () {

    // String Iterators

    string str;
    cin >> str;

    // for (int i = 0; i < str.size(); i++) {
    //     cout << str[i] << endl;
    // }

    cout << *str.begin() << endl;         // Answer = H (Pointer to the first element) 
    cout << *(str.end() - 1) << endl;     // Answer = o (Pointer to the next element after the last element of string)

    for (auto it = str.begin(); it < str.end(); it++) {     // "auto" is the keyword for (string:: iterator)
        cout << *it << " ";
    }

    return 0;
}