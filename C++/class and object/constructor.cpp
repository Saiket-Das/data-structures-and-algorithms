#include<bits/stdc++.h>
using namespace std;

// Declare a class
class Student {
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        // Create a constructor which is a function. Fucntion name will be same as class name. It doesn't return anything.
        // we can't use parameter's name same as object's name.
        Student (int r, int c, char s, char* n) {    // r = roll, c = class, s = section & n = name  
            roll = r;
            cls = c;
            section = s;
            // name = nm;    // Can't use set string like that.
            strcpy(name, n);
        }
};


int main () {

    // Constructor

    // Using basic way
    /*
      Student ahan;
      ahan.roll = 15;
      ahan.cls = 9;
      ahan.section = 'B';
      char nm2[100] = "Ahan Bryan";  
      strcpy(ahan.name, nm2);
    */

    // Using constructor
    Student ahan(15, 9, 'A', "Ahan Bryan");
    Student saiket(5, 7, 'B', "Saiket Das");

    cout << "Ahan's roll: " << ahan.roll << endl;
    cout << "Saiket's section: " << saiket.section << endl;

    return 0;
}