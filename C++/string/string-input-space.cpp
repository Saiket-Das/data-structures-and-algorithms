#include<bits/stdc++.h>
using namespace std;

int main () {

    // String Input with Spaces

    int x;
    string str;

    // cin >> str;              // "cin" works similarly to C program's "scanf" function. "cin" ignore space
    // cin.getline(s, 100);     // "cin.getline()"" for character string (char str[100])

    cin >> x;
    cin.ignore();               // "cin.ignore" is used to ignore "enter" between integer & string input
    getline(cin, str);          // "getline()" is used to read a string or a line from an input stream

    cout << str << endl;         
    cout << str.size() << endl;

    return 0;
}