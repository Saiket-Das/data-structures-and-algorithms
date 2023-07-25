#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;

        Student (string name, int roll, int marks) {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class cmp {
    public: 
        bool operator()(Student a, Student b) {
            if (a.marks == b.marks) return a.roll > b.roll;
            else                    return a.marks < b.marks;
        }
};


int main () {

    // Give Current Max
    // Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structures-a-batch-03/challenges/get-current-max

    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    while (n--) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int queries;
    cin >> queries;

    while (queries--) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;

            Student stu(name, roll, marks);
            pq.push(stu);
            cout << pq.top().name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
        }
        
        else if (command == 1) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            }
            else {
                cout << pq.top().name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
            }
        }

        else if (command == 2) {
            if (pq.empty() == true) {
                cout << "Empty" << endl;
            }
            else {
                pq.pop();
                if (pq.empty()) {
                    cout << "Empty" << endl;
                }
                else {
                    cout << pq.top().name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
                }
            }
        }
    }

    return 0;
}