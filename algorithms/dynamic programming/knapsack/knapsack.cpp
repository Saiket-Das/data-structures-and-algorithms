#include<bits/stdc++.h>
using namespace std;

int knapsack (int n, int s, int v[], int w[]) {
    if (n == 0 || s == 0) return 0;

    if (w[n-1] <= s) {
        int option1 = knapsack(n-1, s-w[n-1], v, w) + v[n-1];
        int option2 = knapsack(n-1, s, v, w);
        return max(option1, option2);
    }
    else {
        return knapsack(n-1, s, v, w);
    }
}

int main () {

    // Knapsack
    // Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

    int n, w;     // n = Number of items & w = Capacity of the knapsack
    cin >> n >> w;

    int value[n], weight[n];
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }

    cout << knapsack(n, w, value, weight) << endl;

    return 0;
}