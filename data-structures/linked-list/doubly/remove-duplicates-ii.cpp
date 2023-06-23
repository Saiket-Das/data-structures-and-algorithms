#include<bits/stdc++.h>
using namespace std;

int main () {

    // Remove Duplicates II
    // Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-03/challenges/remove-duplicated-ii

    list<int> myList;

    int value;
    while (true) {
        cin >> value;
        if (value == -1) break;

        myList.push_back(value);       // Time Complexity = O(1)
    }

    myList.sort();                     // Time Complexity = O(NlogN)
    myList.unique();                   // Time Complexity = O(NlogN)

    for (int value: myList) {
        cout << value << " ";
    }

    return 0;
}