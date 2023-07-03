#include<bits/stdc++.h>
using namespace std;

int main () {

    // STL Queue

    queue<int> q;

    int n;      // Number of element
    cin >> n;


    while (n--) {
        int value;                         // 1 3 5 7 9
        cin >> value;
        q.push(value);
    }
    cout << q.size() << endl;              // Answer - 5

    while (!q.empty()) {
        cout << q.front() << " ";          // 1 3 5 7 9
        q.pop();
    }

    cout << endl << q.empty() << endl;     // Answer - 1 (True)

    return 0;
}