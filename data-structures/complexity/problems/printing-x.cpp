#include<bits/stdc++.h>
using namespace std;

int main () {

    // Printing X
    // Problem link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/printing-x

    /**
      \   /
       \ / 
        X  
       / \ 
      /   \
    **/

    int n;
    cin >> n;

    int i = 1, j = n;
    while(j) {
        for (int k = 1; k <= n; k++) {
            if (j == i && i == k) {
                cout << "X";
            }
            if (k == i && j != i) {     
                cout << "\\";
            }
            if (k == j && j != i) {
                cout << "/";
            }
            if (k != i && k != j) {
                cout << " ";
            }
        }
        cout << endl;
        i++;
        j--;
    }
    return 0;
}