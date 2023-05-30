#include<bits/stdc++.h>
using namespace std;

int main () {

    // Replace words
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

    string str;
    cin >> str;

    while (str.find("EGYPT") != -1) {     // Run the loop untill the "EGYPT" word is not exist in string
        int idx = str.find("EGYPT");      // Find the index
        str.replace(idx, 5, " ");         // Replce the value from that index to 5 words (bcz "EGYPT" has 5 characters)
    }
    cout << str;

    return 0;
}