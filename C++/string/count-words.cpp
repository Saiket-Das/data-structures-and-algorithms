#include<bits/stdc++.h>
using namespace std;

int main () {

    // Count words in String
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

    string str, res;
    getline(cin, str);

    int count = 0;

    for (int i = 0; i < str.size(); i++) {

        if (str[i] != 32 && str[i] != '!' && str[i] != '.' && str[i] != '?' && str[i] != ',') {
            res += str[i];
        }

        if ((str[i] == 32 || str[i] == '!' || str[i] == '.' || str[i] == '?' || str[i] == ',' || i == str.size() - 1) && res.size() !=0) {
            count++;
            res = "";
        }
    }
    cout << count << endl;

    return 0;
}