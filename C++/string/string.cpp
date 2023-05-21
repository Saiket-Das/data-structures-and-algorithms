#include<iostream>
#include<string.h>     // import from C header
using namespace std;

int main () {

    // String input & output in C++

    char str[100];

    // cin  >> str;     // String input without space

    cin.getline(str, 100);     // String input with space
    
    cout << str << endl;
    cout << strlen(str);

    return 0;
}