#include<bits/stdc++.h>
using namespace std;

int main () {

    // Find ratul
    // Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/find-ratul

    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;

    int isTrue = 0;
    while (ss >> word) {
        if (word == "Ratul") {
            isTrue = 1;
            break;   
        }
    }
    
    if (isTrue == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}