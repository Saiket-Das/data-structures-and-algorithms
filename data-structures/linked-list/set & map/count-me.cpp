#include<bits/stdc++.h>
using namespace std;

int main () {

    // Count Me
    // Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structures-a-batch-03/challenges/count-me-2

    int t;          // Number of testcase
    cin >> t;
    cin.ignore();

    while (t--) {
        string sentence;
        getline(cin, sentence);        // Sentence input
    
        string word;
        stringstream ss(sentence);

        map<string, int> mp;
        while (ss >> word) {           // Save single word into map and count
            mp[word]++;
        }

        int max = 0;                   // Find the maximum of the word 
        for(auto it = mp.begin(); it != mp.end(); it++){
            if (max < it->second){
                max = it->second;
            }
        }

        map<string, int> mp2;
        string str;
        stringstream ss2(sentence);

        while (ss2 >> word) {          // Find the most counted word
            mp2[word]++;
            if (mp2[word] == max) {
                str = word;
                break;
            }
        }

        cout << str << " " << max << endl;     // Output
    }

    return 0;
}