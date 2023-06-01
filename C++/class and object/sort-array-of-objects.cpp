#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
      string name;
      int roll;
      int marks;
};

bool compare (Student a, Student b) {
    if (a.marks == b.marks && a.roll < b.roll) return true;
    else if (a.marks > b.marks)                return true;
    else                                       return false;
}

int main () {

    // Sort array of objects
    /*
      Input:
        5
        Asif 29 95
        Sakib 55 89
        Zubair 57 93
        Ahsan 39 86
        Joy 12 99
     
      Output:
        Joy 12 99
        Asif 29 95
        Zubair 57 93
        Sakib 55 89
        Ahsan 39 86
    */
   
    int t;     // Number of testcase
    cin >> t;

    Student arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i].name;
        cin >> arr[i].roll;
        cin >> arr[i].marks;
    }

    sort(arr, arr+t, compare);

    for (int i = 0; i < t; i++) {
        cout << arr[i].name << " "<< arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}