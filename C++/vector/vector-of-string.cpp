#include<bits/stdc++.h>
using namespace std;

int main () {

    // Vector of String

    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }

    for (string s:v) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}