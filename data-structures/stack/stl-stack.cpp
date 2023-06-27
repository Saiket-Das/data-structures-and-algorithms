#include<bits/stdc++.h>
using namespace std;

int main () {

    // STL Stack

    stack<int> st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    if (!st.empty()) {
        cout << "Top -> " << st.top() << endl;
    }

    cout << "Size -> " <<st.size() << endl;

    while (!st.empty()) {
        int x;
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}