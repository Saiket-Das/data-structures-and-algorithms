#include<bits/stdc++.h>
using namespace std;

// #define ll long long;
const long long N = 1e5+5;
long long save[N];

long long recursion (int n) {
    if ((n == 0) || (n == 1)) return 1;

    if (!save[n]) {
        return save[n];
    }
    long long ans1 = recursion(n-1);
    long long ans2 = recursion(n-2);

    save[n] = ans1 + ans2;
    return save[n];
}

int main () {     // Time Complexity -> O()

    // Fibonacci Series using Memoization
    
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        save[i] = -1;
    }

    cout << recursion(n) << endl;

    return 0;
}