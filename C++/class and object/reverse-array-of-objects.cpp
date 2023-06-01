#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
      string name;
      int roll;
      int marks;
};


int main () {

    // Reverse array of objects
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
        Ahsan 39 86
        Zubair 57 93
        Sakib 55 89
        Asif 29 95
    */
   
    int t;     // Number of testcase
    cin >> t;

    Student arr[t];
    for (int i = 0; i < t; i++) {     // Input array of objects
        cin >> arr[i].name;
        cin >> arr[i].roll;
        cin >> arr[i].marks;
    }
    
    for (int i = 0, j = t-1; i < j; i++, j--) {     // Reverse the array of objects
        Student temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < t; i++) {
        cout << arr[i].name << " "<< arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}