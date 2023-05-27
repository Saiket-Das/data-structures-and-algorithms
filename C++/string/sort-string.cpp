#include<bits/stdc++.h>
using namespace std;

int main () {

    // Sort String     (Wrong - Memory limit exceeded)
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

    int n;
    cin >> n;     // Size of string

    char str[n];
    cin >> str;     // String input without space

    for (int i = 1; i < n; i++) {
        char temp = str[i];
        
        int j = i - 1;     // Insert s[j] at its correct position
        while (j >= 0 && str[j] > temp){
            str[j + 1] = str[j];
            j--;
        }
        str[j + 1] = temp;
    }
    
    cout << str;

    return 0;
}