#include<bits/stdc++.h>
using namespace std;

int main () {

    // Count Me II
    // Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structures-a-batch-03/challenges/count-me-ii

    int t;          // Number of testcase
    cin >> t;

    while (t--) {
        map<int, int> mp;

        int n;
        cin >> n;
        while (n--) {
            int x;
            cin >> x;
            mp[x]++;
        }

        int maximum_value, max = 0;

        for(auto it = mp.begin(); it != mp.end(); it++){        // Find the most count
            if (max < it->second){
                maximum_value = it->first;
                max = it->second;
            }
        }

        for(auto it = mp.begin(); it != mp.end(); it++){        // Find the most counted value
            if (max == it->second && maximum_value < it->first){
                maximum_value = it->first;
            }
        }

        cout << maximum_value << " " << max << endl;            // Output   
    }

    return 0;
}