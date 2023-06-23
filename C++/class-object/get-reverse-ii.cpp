#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
      string nm;
      int cls;
      char s;
      int id;
};

int main () {

    // Get reverse ii
    // Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/get-reverse-1

    int n;     // Array length
    cin >> n;

    Student arr[n];      // Array of objects

    for (int i = 0; i < n; i++) {     // Array of objects input
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    for (int i = 0, j = n-1; i < j; i++, j--) {     // Reverse the ID of Student array of objects
        int temp = arr[i].id;
        arr[i].id = arr[j].id;
        arr[j].id = temp;
    }

    for (int i = 0; i < n; i++) {     // Output
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }

    return 0;
}