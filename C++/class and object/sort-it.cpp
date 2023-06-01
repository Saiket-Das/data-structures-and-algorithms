#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
      string nm;
      int cls;
      char s;
      int id;
      int math_marks;
      int eng_marks;
};

bool comapre(Student a, Student b) {     // Compare students with total_mark(math + eng marks). If total_marks are equal then sort them by Student id
    int a_total_marks = a.math_marks + a.eng_marks;
    int b_total_marks = b.math_marks + b.eng_marks;
    if ((a_total_marks == b_total_marks) && (a.id < b .id)) return true;
    else if (a_total_marks > b_total_marks)                 return true;
    else                                                    return false;
}

int main () {

    // Sort it
    // Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/sort-it-6-2

    int n;     // Array length
    cin >> n;

    Student arr[n];      // Array of objects

    for (int i = 0; i < n; i++) {     // Array of objects input
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr+n, comapre);

    for (int i = 0; i < n; i++) {     // Output
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}