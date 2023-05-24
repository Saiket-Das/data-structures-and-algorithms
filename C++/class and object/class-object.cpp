#include<bits/stdc++.h>
using namespace std;

// Declare a class
class Student {
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};


int main () {

    // Class and Object

    Student saiket;
    saiket.roll = 5;
    saiket.cls = 9;
    saiket.section = 'A';
    // saiket.name = "Saiket Das";     // // Error. We can't initialize string after declare.

    // Solution
    char nm[100] = "Saiket Das";     // Declare a string with initialize value

    strcpy(saiket.name, nm);     // Then copy that string to class object


    Student ahan;
    ahan.roll = 15;
    ahan.cls = 9;
    ahan.section = 'B';
    char nm2[100] = "Ahan Bryan";  
    strcpy(ahan.name, nm2);

    cout << "Ahan's roll: " << ahan.roll << endl;
    cout << "Saiket's section: " << saiket.section;

    return 0;
}