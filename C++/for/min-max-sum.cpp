#include<bits/stdc++.h>
using namespace std;

int main () {

    // Minimum and Maximum Sum
    // Problem link: https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int min_sum = INT_MAX, max_sum = INT_MIN;

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            if (i != j) {
                sum += arr[j];
            }
        }
        if (min_sum > sum) {
            min_sum = sum;
        }
        if (max_sum < sum) {
            max_sum = sum;
        }
    }

    cout << min_sum << " " << max_sum;

    return 0;
}