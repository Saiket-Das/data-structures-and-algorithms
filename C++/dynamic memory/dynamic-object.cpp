#include<bits/stdc++.h>
using namespace std;

// Declare a class
class Student {
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        
        Student (int r, int c, char s, char* n) { 
            roll = r;
            cls = c;
            section = s;
            strcpy(name, n);
        }
};



int main () {

    // Dynamic object

    char name[100] = "Ahan Bryan";

    // Student ahan(17, 6, 'A', name);     // Normal object
    
    Student *ahan = new Student(17, 6, 'A', name);     // Dynamic object


    /*
      Way to access object's value
        We can use `ahan->name` ('->' mean dereference)
        We can use `(*ahan).name` ('*name' means get the value from name location). But we must need to use `first bracket() from dereference`.
        ahan->name == (*ahan).name (Both are same)
    */

    (*ahan).roll = 9;     // Update the Object's values

    cout << "---------------" << endl;
    cout << ahan->name << endl;      
    cout << "Class: "<< (*ahan).cls << endl;
    cout << "Roll no: " << ahan->roll << endl;
    cout << "Section: " << ahan->section << endl;

    delete ahan;     // Delete the object from dynamic memory or heap memory

    cout << "---------------" << endl;
    cout << ahan->name << endl;      
    cout << "Class: "<< (*ahan).cls << endl;
    cout << "Roll no: " << ahan->roll << endl;
    cout << "Section: " << ahan->section << endl;

    return 0;
}