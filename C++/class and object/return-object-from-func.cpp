#include<bits/stdc++.h>
using namespace std;

// Declare a class
class Student {
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student (int r, int c, char s, char* n) {    // r = roll, c = class, s = section & n = name
            roll = r;
            cls = c;
            section = s;
            strcpy(name, n);
        }
};


Student fun () {     // RVO = Return value optimization
    char name[100] = "Ahan Bryan";

    Student ahan(15, 9, 'A', name);
    return ahan;
}

int main () {

    // Return object from Function

    /*
      char name[100] = "Ahan Bryan";     // Pass a initialize string in function instead of directly pass a string
      Student ahan(15, 9, 'A', name);
    */
    Student ahan = fun();     // Using RVO instead of ☝

    

    cout << ahan.name << endl;
    cout << "Class: "<< ahan.cls << endl;
    cout << "Roll no: " << ahan.roll << endl;
    cout << "Section: " << ahan.section << endl;

    return 0;
}
