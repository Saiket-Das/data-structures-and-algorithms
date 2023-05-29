#include<bits/stdc++.h>
using namespace std;

int main () {

    // Stringstream

    string str;
    getline(cin, str);

    stringstream ss(str);          //  Use a string buffer that contains a sequence of characters
    string word;

    int count = 0;
    while (ss >> word) {
        count++;
        cout << word << endl;
    }

    cout << count << endl;         // Answer = 5 (5 word in this "Hi, I am Ahan Byran" line)

    return 0;
}