#include<bits/stdc++.h>
using namespace std;

void print (stringstream &ss, string x) {
    string word;
    int count = 0;

    if (ss >> word) {
        cout << x << " " << word << endl;
        if (word == x) {

            count++;
        }
        print(ss, x);
    }
}

int main () {

    //  Count how many times a word appeared in the sentence

    string str, x;

    getline(cin, str);
    cin >> x;

    int count = 0;
    
    stringstream ss(str);
    string word;
    
    while (ss >> word) {
        if (word == x) {
            count++;
        }
    }

    cout << count;
    
    return 0;
}