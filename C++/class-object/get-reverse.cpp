#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
      string nm;
      int cls;
      char s;
      int math_marks;
      int eng_marks;
};

int main () {

    // Get reverse
    // Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/get-reverse

    int n;     // Array length
    cin >> n;

    Student arr[n];      // Array of objects

    for (int i = 0; i < n; i++) {     // Array of objects input
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].math_marks >> arr[i].eng_marks;
    }

    for (int i = 0, j = n-1; i < j; i++, j--) {     // Array of objects reverse
        Student temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++) {     // Output
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}