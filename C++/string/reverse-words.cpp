#include <bits/stdc++.h>
using namespace std;

int main() {

    // Reverse words
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;

    ss >> word;     // Find out the only 1st word from character

    for (int i = 0 ,j = word.size() - 1; i < j; i++, j--) {     // Reverse the 1st word
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    cout << word;     // Print the 1st word after reverse

    while(ss >> word) {
        for (int i = 0, j = word.size()-1; i < j; i++, j--) {     // Reverse the other letters
            char temp = word[i];
            word[i] =word[j];
            word[j] = temp;
        }
        cout << " " << word;     // Print the other words after reversing with space
    }
    return 0;
}